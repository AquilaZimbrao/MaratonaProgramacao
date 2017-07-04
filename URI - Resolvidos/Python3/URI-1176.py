# -*- coding: utf-8 -*-

def fibonacci(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a + b
    return a

n = int(input())
while(n > 0):
    number = int(input())
    f = fibonacci(number)
    r = "Fib({}) = {}".format(number,f)
    print(r)
    n -=1