# -*- coding: utf-8 -*-

def mdc(a,b):
    if(b==0):
        return a
    else:
        return mdc(b,a%b)

while True:
    try:
        inp = input()
    except EOFError:
        exit(0)

    inp = str(inp).split(' ')
    inp = list(map(int,inp))
    inp = sorted(inp)

    if (inp[2] ** 2 == (inp[0] ** 2 + inp[1] ** 2)):
        if(mdc(mdc(inp[0],inp[1]),inp[2]) == 1):
            print("tripla pitagorica primitiva")
        else:
            print("tripla pitagorica")
    else:
        print("tripla")