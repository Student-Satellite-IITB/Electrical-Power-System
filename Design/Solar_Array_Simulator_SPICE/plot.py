import numpy as np
import matplotlib.pyplot as plt

Column = ['i(Vtest)',' v(vout)','v(q2_b)','v(q1_b)','v(q1_e)']
# Load the data from the file
data = np.loadtxt("D:\\random\op.txt")

# Extract the x values (2nd column)
x = data[:, 1]

# Extract the y values (every even column starting from the 4th column)
y_columns = data[:, 3::2]

# Number of subplots
num_subplots = y_columns.shape[1]

# Create subplots
fig, axs = plt.subplots(num_subplots + 1, 1, figsize=(10, 5 * num_subplots + 1 ))

# Plot each y column in a different subplot
for i in range(num_subplots):
    axs[i].plot(x, y_columns[:, i], label=Column[i])
    axs[i].set_xlabel('Load')
    axs[i].set_ylabel('Y values')
    axs[i].set_title(f'Subplot {i+1}')
    axs[i].legend()

# IV plot
axs[i+1].plot(y_columns[:,1],y_columns[:,0], label = 'IV')
axs[i+1].set_xlabel('V')
axs[i+1].set_ylabel('I')
axs[i+1].set_title(f'Subplot {i+1}')
axs[i+1].legend()

plt.tight_layout()
plt.show()