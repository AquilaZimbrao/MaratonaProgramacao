# -*- coding: utf-8 -*-

while True:
    entrada = input()
    entrada = entrada.split(' ')

    if(entrada[0] == '0' and entrada[1] == '0'):
        break

    result = ''
    for a in entrada[1]:
        if(a != entrada[0]):
            result += a


    if(len(result) == 0 or int(result) == 0):
        result = '0'
    print(int(result))