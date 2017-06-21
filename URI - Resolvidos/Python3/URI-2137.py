# -*- coding: utf-8 -*-

import sys


def mergeSort(lista):
    direita = list()
    esquerda = list()

    if(len(lista) < 2):
        return lista

    meio = int(len(lista)/2)
    direita = lista[:meio]
    esquerda = lista[meio:]
    del lista
    return merge(mergeSort(direita), mergeSort(esquerda))

def merge(direita, esquerda):
    result = list()

    while direita or esquerda:
        if(len (direita) and len(esquerda)):
            if( int(direita[0]) > int(esquerda[0])):
                result.append(esquerda.pop(0))
            else:
                result.append(direita.pop(0))

        if not len(direita):
            result.append(esquerda.pop(0))
        elif not len(esquerda):
            result.append(direita.pop(0))
    del direita
    del esquerda
    return result


while(True):
    try:
        n = int(sys.stdin.readline())
    except:
        exit(0)

    a = list()
    for i in range(n):
        a.append(input())

    a = mergeSort(a)

    for i in a:
        print(i)



