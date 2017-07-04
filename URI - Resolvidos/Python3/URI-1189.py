# -*- coding: utf-8 -*-
opr = input()
selecionados = list()
aceitos = [12,24,36,48,60,72,84,96,108,120,25,37,49,61,73,85,97,109,38,50,62,74,86,98,51,63,75,87,64,76]


for a in range(12*12):
    n = float(input())
    if(a in aceitos):
        selecionados.append(n)

if(opr == 'S'):
    print(round(sum(selecionados),1))
else:
    print(round(sum(selecionados)/len(selecionados),1))