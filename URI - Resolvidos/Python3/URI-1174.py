# -*- coding: utf-8 -*-

i = 0
pos = list()
value = list()

while(i < 100):
    n = float(input())
    if(n <= 10):
        pos.append(i)
        value.append(n)

    i +=1
pos = pos[::-1]
value = value[::-1]

i = 0
while(i < len(pos)):
    print('A['+str(pos.pop())+'] = '+str(round(value.pop(),1)))