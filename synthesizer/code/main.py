import numpy as np
import sounddevice as sd

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
