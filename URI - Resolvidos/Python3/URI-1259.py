# -*- coding: utf-8 -*-

n = int(input())
par = list()
impar = list()

for a in range(n):
    t = int(input())
    if(t%2 == 0):
        par.append(t)
    else:
        impar.append(t)

par = sorted(par)
impar = sorted(impar)

for a in par:
    print(a)
for b in reversed(impar):
    print(b)

