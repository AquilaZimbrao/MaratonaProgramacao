# -*- coding: utf-8 -*-

a = float(input())
a *=2
for n in range(100):
    a = float(a/2)
    result = "%.4f"%(a)
    r = "N[{}] = {}".format(n,result)
    print(r)