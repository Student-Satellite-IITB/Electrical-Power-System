#ifndef MPPT_H
#define MPPT_H

typedef struct {
    float voltage;
    float current;
    float power;
    float prev_power;
    float prev_voltage;
    float duty_cycle;
    float perturbation;
} MPPT_t;

void MPPT_Init(MPPT_t *mppt);
void MPPT_Update(MPPT_t *mppt, float voltage, float current);

#endif
