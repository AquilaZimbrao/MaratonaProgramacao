# -*- coding: utf-8 -*-

def mdc(dividendo, divisor):
    while divisor != 0:
        temp = divisor
        divisor = dividendo % divisor
        dividendo = temp
    return dividendo


N = int(input())

while(N > 0):
    s = input()
    s = s.split(' ')

    print(mdc(int(s[0]),int(s[1])))
    N -= 1
