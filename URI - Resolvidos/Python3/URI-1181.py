# -*- coding: utf-8 -*-

linha = int(input())
operacao = input()
matriz={}
soma = 0

for l in range(12):
    matriz[l] = []
    for c in range(12):
        matriz[l].append(float(input()))
        if(l == linha):
            soma += matriz[l][c]

if(operacao == 'S'):
    r = "%.1f"%(soma)
    print(r)
else:
    r = "%.1f" % (soma/12)
    print(r)