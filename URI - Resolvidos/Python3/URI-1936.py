# -*- coding: utf-8 -*-

def fatorial(N):
    s = 1
    for a in range(N):
        s *= (a+1)

    return s

number = int(input())
comp = number
count = 0
soma = 0
s = 1
while True:
    a = fatorial(s)
    if(a > comp):
        count += 1
        soma += fatorial(s-1)
        if(soma == number):
            break
        comp = number-soma
        s = 1
    s +=1

print(count)