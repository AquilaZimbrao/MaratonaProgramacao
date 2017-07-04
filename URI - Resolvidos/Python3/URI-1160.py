import math
n = int(input())

while(n > 0):
    s = input()
    s = s.split(' ')

    TB = float(s.pop())
    TA = float(s.pop())
    PB = int(s.pop())
    PA = int(s.pop())
    anos = 0

    while(True):
        PA += math.floor((PA/100)*TA)
        PB += math.floor((PB/100)*TB)
        anos += 1
        if(anos > 100):
            break
        if(PA > PB):
            break

    if(anos > 100):
        r = "Mais de 1 seculo."
    else:
        r = str(anos) + " anos."

    print(r)
    n-=1