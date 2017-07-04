# -*- coding: utf-8 -*-

import string
N = int(input())

while(N > 0):
    text = input()
    text = text[::-1]
    result = ''
    alf = string.ascii_lowercase

    for key,letter in enumerate(text):
        if((letter.lower() in alf)):
            a = chr(ord(letter)+3)
        else:
            a = letter

        if(key >= (len(text)//2)):
            a = chr(ord(a)-1)

        result += a

    print(result)
    N -=1