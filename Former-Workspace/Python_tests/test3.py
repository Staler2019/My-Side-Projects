import numpy as a
import matplotlib.pyplot as b
from sympy import *
x = a.linspace(-4, 4, 50)
y = E**((-x**2)/2)/((2*pi)**(1/2))
b.ylim((0, 0.4))
b.plot(x, y)
b.title("please close the screen to see next answer")
b.show()
k = eval(input("請輸入實數:"))
d, e, f = symbols("d,e,f")
e = E**((-d**2)/2)
f = (2*pi)**(1/2)
c = integrate(e/f, (d, -oo, k)).simplify()
print("the result using sympy:", c)
print("the result using numpy:", c)
