import tkinter as tk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import numpy as np
import random
from matplotlib.animation import FuncAnimation

# Create the main window
root = tk.Tk()
root.title("Live Data Plot")

# Create the figure and subplot
fig = Figure(figsize=(6, 4))
ax = fig.add_subplot(111)
line, = ax.plot([], [])
ax.set_xlim(0, 100)
ax.set_ylim(0, 100)

# Create the canvas
canvas = FigureCanvasTkAgg(fig, master=root)
canvas.get_tk_widget().pack()

# Initialize data
x_data = []
y_data = []

# Animation update function
def update(frame):
    x_data.append(frame)
    y_data.append(random.randint(0, 100))

    if len(x_data) > 100:
        x_data.pop(0)
        y_data.pop(0)

    line.set_data(x_data, y_data)
    return line,

# Create animation
ani = FuncAnimation(fig, update, frames=range(100), interval=100, blit=True)

# Start the main loop
root.mainloop()

# Generate a sine wave
sample_rate = 44100
duration = 2  # seconds
t = np.linspace(0, duration, int(sample_rate * duration))
frequency = 440  # Hz (A4 note)
amplitude = 0.5

sine_wave = amplitude * np.sin(2 * np.pi * frequency * t)

# Play the sound
sd.play(sine_wave, sample_rate)
sd.wait()  # Wait until the sound finishes playing
