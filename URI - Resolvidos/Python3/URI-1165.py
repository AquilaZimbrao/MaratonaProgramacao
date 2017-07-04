# -*- coding: utf-8 -*-

n = int(input())

while(n > 0):
    number = int(input())
    divisor = 0
    for t in range(number):
        if(number%(t+1) == 0):
            divisor +=1

    if(divisor == 2):
        print(str(number) + " eh primo")
    else:
        print(str(number) + " nao eh primo")
    n -= 1