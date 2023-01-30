import matplotlib.pyplot as plt
import numpy as np

x = []
x2  = []
x3 = []
x4 = []
x5 = []
x6 = []

y = []
y2 = []
y3 = []
y4 = []
y5 = []
y6 = []

for i in np.arange(-10, 11, .01):
    x.append(i**3 - 2*i)
    x2.append(i**4-i**2)
    x3.append(np.sin(3*i))
    x4.append(i+np.sin(2*i))
    x5.append(np.sin(i+np.sin(i)))
    x6.append(np.cos(i))
for i in np.arange(-10,11,.01):
    y.append(i**2 - i)
    y2.append(i+np.log(i))
    y3.append(np.sin(4*i))
    y4.append(i + np.sin(3*i))
    y5.append(np.cos(i+np.cos(i)))
    y6.append(np.sin(i+np.sin(5*i)))
plt.plot(x, y)#this is IV
plt.plot(x2,y2)#this is VI
plt.plot(x3,y3)#this is V
plt.plot(x4,y4)#this is III
plt.plot(x5,y5)#this is I
plt.plot(x6,y6)#this is II

plt.show()
