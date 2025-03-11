from math import *

K=2**8

t=list(range(K))
y=list(range(K))

for x in range(K):
    t[x]=x*2*pi/2**8

for x in range(K):
    y[x]=int((2**15-1)*sin(t[x]))

for x in range(K):
    if y[x]<0:
        y[x]=0xffff+y[x]

print("{", end="")
for x in y:
    print(hex(x), end=', ')
print("}", end="")



