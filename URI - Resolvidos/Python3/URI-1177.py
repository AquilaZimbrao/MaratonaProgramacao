# -*- coding: utf-8 -*-


T = int(input())

for a in range(1000):
    r = "N[{}] = {}".format(str(a),str(a%T))
    print(r)