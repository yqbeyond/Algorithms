import numpy as np
import matplotlib.pyplot as plt
from pylab import *

x = []
y = []
with open("data.txt", "r") as points:
    for point in points:
        point = point.split()
        x.append(int(point[0]))
        y.append(1000 - int(point[1]))
x = np.array(x)
y = np.array(y)

plt .figure(1)
plt.scatter(x, y)
plt.show()
