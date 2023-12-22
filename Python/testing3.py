import numpy as np
import math

xn = [2, 2, 2, 2, 1, 1, 1, 1]

# Define the complex twiddle factors correctly
w2o = w4o = w8o = 1
w41 = w82 = complex(-1, 0)
w81 = (1 - 1j) / math.sqrt(2)
w83 = (-1 - 1j) / math.sqrt(2)

# STAGE 1 - RADIX 8 POINT
y3n = [0] * 8
y3n[0] = xn[0] + xn[4]
y3n[1] = xn[1] + xn[5]
y3n[2] = xn[2] + xn[6]
y3n[3] = xn[3] + xn[7]
y3n[4] = (xn[0] - xn[4]) * w4o
y3n[5] = (xn[1] - xn[5]) * w81
y3n[6] = (xn[2] - xn[6]) * w82
y3n[7] = (xn[3] - xn[7]) * w83

print("Stage 1: 8 point solution:")
print(y3n)

# STAGE 2 - 4 POINT
y2n = [0] * 8
y2n[0] = y3n[0] + y3n[1]
y2n[1] = y3n[2] + y3n[3]
y2n[2] = (y3n[0] - y3n[1]) * w4o
y2n[3] = (y3n[2] - y3n[3]) * w41
y2n[4] = y3n[4] + y3n[5]
y2n[5] = y3n[6] + y3n[7]
y2n[6] = (y3n[4] - y3n[5]) * w4o
y2n[7] = (y3n[6] - y3n[7]) * w41

print("\nStage 2: 4 point solution")
print(y2n)

# STAGE 3 - 2 POINT
y1n = [0] * 8
y1n[0] = y2n[0] + y2n[1]
y1n[1] = y2n[0] - y2n[1]
y1n[2] = y2n[2] + y2n[3]
y1n[3] = y2n[2] - y2n[3]
y1n[4] = y2n[4] + y2n[5]
y1n[5] = y2n[4] - y2n[5]
y1n[6] = y2n[6] + y2n[7]
y1n[7] = y2n[6] - y2n[7]

print("\nStage 3: 2 point solution")
print("Solution obtained using computation of DIF FFT")
print(y1n)

print("\nExact solution using fft function")
print(np.fft.fft(xn))
