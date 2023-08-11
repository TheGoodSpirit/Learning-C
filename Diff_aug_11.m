# Derivative
syms x

A = diff(e.^x)
B = diff(e.^(3*x+1))
C = diff(log(3*x+5))
D = diff(log(log(x)))
E = diff(x*(log(x)))
F = diff(e.^(sin(x)))
G = diff(log(sin(x)))
H = diff(sqrt(tan(x)))
I = diff(sin(p*x+q))
