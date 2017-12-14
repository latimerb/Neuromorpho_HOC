import numpy as np
import matplotlib.pyplot as plt

X1 = np.loadtxt("./v_out/dend{i}v.dat".format(i=5))
X2 = np.loadtxt("./v_out/dend{i}v.dat".format(i=10))
X3 = np.loadtxt("./v_out/somav.dat")
plt.plot(X1,'blue',label='dend 1')
plt.plot(X2, 'red', label='dend 2')
plt.plot(X3, 'black', label = 'soma')
plt.ylabel("voltage (mV)")
plt.xlabel("time")
plt.legend()
plt.show()

I1 = np.loadtxt("./i_out/dend{i}i.dat".format(i=5))
I2 = np.loadtxt("./i_out/dend{i}i.dat".format(i=10))
plt.plot(I1,'blue',label='dend 1')
plt.plot(I2,'red', label='dend 2')
plt.ylabel("current (uA)")
plt.xlabel("time")
plt.legend()
plt.show()