# -*- coding: utf-8 -*-

s = []
for a in range(20):
    s.append(int(input()))
for a in range(20):
    r = "N[{}] = {}".format(a,str(s.pop()))
    print(r)
