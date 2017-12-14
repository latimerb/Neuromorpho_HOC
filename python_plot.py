import numpy as np
import matplotlib.pyplot as plt

X1 = np.loadtxt("./v_out/dend{i}v.dat".format(i=5))
X2 = np.loadtxt("./v_out/dend{i}v.dat".format(i=10))
X3 = np.loadtxt("./v_out/somav.dat")
plt.plot(X1,'blue')
plt.plot(X2, 'red')
plt.plot(X3, 'black')
plt.show()