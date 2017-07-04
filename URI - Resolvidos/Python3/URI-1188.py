# -*- coding: utf-8 -*-

opr = input()
selecionados = list()
aceitos = [133,134,135,136,137,138,139,140,141,142,122,123,124,125,126,127,128,129,111,112,113,114,115,116,100,101,102,103,89,90]



for a in range(12*12):
    n = float(input())
    if(a in aceitos):
        selecionados.append(n)

if(opr == 'S'):
    print(round(sum(selecionados),1))
else:
    print(round(sum(selecionados)/len(selecionados),1))
