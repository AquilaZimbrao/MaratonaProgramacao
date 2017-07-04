# -*- coding: utf-8 -*-

while(True):
    n = int(input())

    if(n == 0):
        exit(0)
    s = 0
    if(n%2 == 1):
        n += 1

    for a in range(5):
        s += n
        n += 2

    print(s)