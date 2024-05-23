#!/usr/bin/env python3

import matplotlib.pyplot as plt

# Layout data from the info.json file
layout = [
    {"matrix": [0, 0], "x": 0, "y": 0.5},
    {"matrix": [0, 1], "x": 1, "y": 0.375},
    {"matrix": [0, 2], "x": 2, "y": 0.125},
    {"matrix": [0, 3], "x": 3, "y": 0},
    {"matrix": [0, 4], "x": 4, "y": 0.125},
    {"matrix": [0, 5], "x": 5, "y": 0.25},
    {"matrix": [5, 5], "x": 10.5, "y": 0.25},
    {"matrix": [5, 4], "x": 11.5, "y": 0.125},
    {"matrix": [5, 3], "x": 12.5, "y": 0},
    {"matrix": [5, 2], "x": 13.5, "y": 0.125},
    {"matrix": [5, 1], "x": 14.5, "y": 0.375},
    {"matrix": [5, 0], "x": 15.5, "y": 0.5},
    {"matrix": [1, 0], "x": 0, "y": 1.5},
    {"matrix": [1, 1], "x": 1, "y": 1.375},
    {"matrix": [1, 2], "x": 2, "y": 1.125},
    {"matrix": [1, 3], "x": 3, "y": 1},
    {"matrix": [1, 4], "x": 4, "y": 1.125},
    {"matrix": [1, 5], "x": 5, "y": 1.25},
    {"matrix": [6, 5], "x": 10.5, "y": 1.25},
    {"matrix": [6, 4], "x": 11.5, "y": 1.125},
    {"matrix": [6, 3], "x": 12.5, "y": 1},
    {"matrix": [6, 2], "x": 13.5, "y": 1.125},
    {"matrix": [6, 1], "x": 14.5, "y": 1.375},
    {"matrix": [6, 0], "x": 15.5, "y": 1.5},
    {"matrix": [2, 0], "x": 0, "y": 2.5},
    {"matrix": [2, 1], "x": 1, "y": 2.375},
    {"matrix": [2, 2], "x": 2, "y": 2.125},
    {"matrix": [2, 3], "x": 3, "y": 2},
    {"matrix": [2, 4], "x": 4, "y": 2.125},
    {"matrix": [2, 5], "x": 5, "y": 2.25},
    {"matrix": [7, 5], "x": 10.5, "y": 2.25},
    {"matrix": [7, 4], "x": 11.5, "y": 2.125},
    {"matrix": [7, 3], "x": 12.5, "y": 2},
    {"matrix": [7, 2], "x": 13.5, "y": 2.125},
    {"matrix": [7, 1], "x": 14.5, "y": 2.375},
    {"matrix": [7, 0], "x": 15.5, "y": 2.5},
    {"matrix": [3, 0], "x": 0, "y": 3.5},
    {"matrix": [3, 1], "x": 1, "y": 3.375},
    {"matrix": [3, 2], "x": 2, "y": 3.125},
    {"matrix": [3, 3], "x": 3, "y": 3},
    {"matrix": [3, 4], "x": 4, "y": 3.125},
    {"matrix": [3, 5], "x": 5, "y": 3.25},
    {"matrix": [4, 5], "x": 6, "y": 2.75},
    {"matrix": [9, 5], "x": 9.5, "y": 2.75},
    {"matrix": [8, 5], "x": 10.5, "y": 3.25},
    {"matrix": [8, 4], "x": 11.5, "y": 3.125},
    {"matrix": [8, 3], "x": 12.5, "y": 3},
    {"matrix": [8, 2], "x": 13.5, "y": 3.125},
    {"matrix": [8, 1], "x": 14.5, "y": 3.375},
    {"matrix": [8, 0], "x": 15.5, "y": 3.5},
    {"matrix": [4, 0], "x": 1.5, "y": 4.375},
    {"matrix": [4, 1], "x": 2.5, "y": 4.125},
    {"matrix": [4, 2], "x": 3.5, "y": 4.15},
    {"matrix": [4, 3], "x": 4.5, "y": 4.25},
    {"matrix": [4, 4], "x": 6, "y": 4.25, "h": 1.5},
    {"matrix": [9, 4], "x": 9.5, "y": 4.25, "h": 1.5},
    {"matrix": [9, 3], "x": 11, "y": 4.25},
    {"matrix": [9, 2], "x": 12, "y": 4.15},
    {"matrix": [9, 1], "x": 13, "y": 4.125},
    {"matrix": [9, 0], "x": 14, "y": 4.375}
]

# Create the plot
fig, ax = plt.subplots()

for key in layout:
    x = key["x"]
    y = key["y"]
    label = f'{key["matrix"]}'
    height = key.get("h", 1)
    width = 1  # Assume width of 1 for simplicity

    rect = plt.Rectangle((x, y), width, height, fill=True, edgecolor='black', facecolor='skyblue')
    ax.add_patch(rect)
    plt.text(x + width / 2, y + height / 2, label, ha='center', va='center',fontsize='x-small')

# Set the limits and aspect ratio
ax.set_xlim(-1, 18)
ax.set_ylim(-1, 6)
ax.set_aspect('equal')

# Hide axes
ax.axis('off')

plt.show()
