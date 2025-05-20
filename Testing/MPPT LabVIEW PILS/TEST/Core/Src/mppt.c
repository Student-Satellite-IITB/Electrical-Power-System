#include "mppt.h"
#include "math.h"
#define EPSILON 1e-5f

void MPPT_Init(MPPT_t *mppt) {
    mppt->voltage = 0;
    mppt->current = 0;
    mppt->power = 0;
    mppt->prev_power = 0;
    mppt->prev_voltage = 0;
    mppt->duty_cycle = 0.5f; // start from 50%
    mppt->perturbation = 0.01f;
}

void MPPT_Update(MPPT_t *mppt, float v, float i) {
    float p = v * i;
    float deltaV = v - mppt->prev_voltage;
    float deltaP = p - mppt->prev_power;

    if (fabsf(deltaP) < EPSILON) {
        // No change — stay at current duty cycle
        return;
    }

    if (deltaP > 0) {
        mppt->duty_cycle += (deltaV > 0) ? -mppt->perturbation : mppt->perturbation;
    } else {
        mppt->duty_cycle += (deltaV > 0) ? mppt->perturbation : -mppt->perturbation;
    }

    // Clamp between 0 and 1
    if (mppt->duty_cycle > 1.0f) mppt->duty_cycle = 1.0f;
    if (mppt->duty_cycle < 0.0f) mppt->duty_cycle = 0.0f;

    // Save for next iteration
    mppt->prev_voltage = v;
    mppt->prev_power = p;
}
