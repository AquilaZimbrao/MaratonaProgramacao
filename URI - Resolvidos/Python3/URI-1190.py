# -*- coding: utf-8 -*-
opr = input()
selecionados = list()
aceitos = [23,35,47,59,71,83,95,107,119,131,34,46,58,70,82,94,106,118,45,57,69,81,93,105,56,68,80,92,67,79]


for a in range(12*12):
    n = float(input())
    if(a in aceitos):
        selecionados.append(n)

if(opr == 'S'):
    print(round(sum(selecionados),1))
else:
    print(round(sum(selecionados)/len(selecionados),1))