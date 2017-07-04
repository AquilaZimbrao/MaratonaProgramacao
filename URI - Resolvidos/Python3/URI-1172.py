# -*- coding: utf-8 -*-

number = []
for a in range(10):
    s = int(input())
    if(s <= 0):
        s = 1
    number.append(s)
for key,value in enumerate(number):
    r = "X[{}] = {}".format(key,value)
    print(r)