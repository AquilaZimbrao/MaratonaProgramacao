# -*- coding: utf-8 -*-

def fat(N,K):
    I = 1
    result = N
    while(N-(I*K) > 1):
        result *= (N-(I*K))
        I += 1
    return result


T = int(input())

for a in range(T):
    s = input()
    lim = 0
    N = ''
    K = ''

    for c in s:
        if c.isdigit():
            N += c
        else:
            K += c

    N = int(N)
    K = len(K)

    print(fat(N,K))