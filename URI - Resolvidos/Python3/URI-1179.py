# -*- coding: utf-8 -*-


par = []
impar = []

for a in range(15):
    numero = int(input())

    if (numero % 2 == 0):
        par.append(numero)
    else:
        impar.append(numero)

    if (len(par) == 5):
        for key, value in enumerate(par):
            print("par[{}] = {}".format(key, value))
        par.clear()

    if (len(impar) == 5):
        for key, value in enumerate(impar):
            print("impar[{}] = {}".format(key, value))
        impar.clear()

for key, value in enumerate(impar):
    print("impar[{}] = {}".format(key, value))

for key, value in enumerate(par):
    print("par[{}] = {}".format(key, value))