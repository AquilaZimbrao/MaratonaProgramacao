# -*- coding: utf-8 -*-

a = int(input())

s = []
s.append(a)

for x in range(9):
    a *= 2
    s.append(a)

for key,value in enumerate(s):
    r = "N[{}] = {}".format(key,value)
    print(r)