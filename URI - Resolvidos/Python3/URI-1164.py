# -*- coding: utf-8 -*-

n = int(input())
i = 0
while(i < n):
    sum = 0
    num = int(input())

    j = 1
    while(j != num):
        if num%j == 0:
            sum += j
        j +=1

    if sum == num:
        print(str(num) + ' eh perfeito')
    else:
        print(str(num) + ' nao eh perfeito')
    i +=1
