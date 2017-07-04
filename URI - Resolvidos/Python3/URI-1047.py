# -*- coding: utf-8 -*-

s = input()
s = s.split(' ')
H = 0
M = 0

if(s[0] == s[1] == s[2] == s[3]):
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
    exit(0)
if(int(s[0]) < int(s[2])):
    H = int(s[2]) - int(s[0])
if(int(s[1]) < int(s[3])):
    M = int(s[3]) - int(s[1])
if(int(s[0]) > int(s[2])):
    H = 24 - (int(s[0]) - int(s[2]))
if(int(s[1]) > int(s[3])):
    M = 60 - (int(s[1]) - int(s[3]))
    H -= 1

r = "O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(H,M)

print(r)