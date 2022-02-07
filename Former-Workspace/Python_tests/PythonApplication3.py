from sympy import*

var("x, y")

f = x*cos(x)*sin(y)

for a in [x, y]:
    for b in [x, y]:
        for c in [x, y]:
            for d in [x, y]:
                if a+b+c+d == 2*x + 2*y:
                    df = Derivative(f, a, b, c, d)
                    pprint(df)
                    print('= ', df.doit())
                    print()
