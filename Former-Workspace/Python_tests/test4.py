import numpy as np
a = np.array([[1, 2, 3], [4, 5, 6]])
b = np.array([[1, 2, 3], [4, 5, 6]])

print(np.dot(a[:, :2], b[:, :2]))
print(np.vdot(a, b))
