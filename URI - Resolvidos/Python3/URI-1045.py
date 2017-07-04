"""Notebook para Maratona de Python"""

s = input()
s = s.split(' ')
a = float(s[0])
b = float(s[1])
c = float(s[2])

if (a < b):
    temp = a
    a = b
    b = temp

if (b < c):
    temp = b
    b = c
    c = temp

if (a < b):
    temp = a
    a = b
    b = temp


if(a >= b+c):
    print("NAO FORMA TRIANGULO")
    exit(0)
a2 = a**2
b2 = b**2
c2 = c**2

if(a2 == b2 + c2):
    print("TRIANGULO RETANGULO")
elif(a2 > b2 + c2):
    print("TRIANGULO OBTUSANGULO")
elif(a2 < b2 + c2):
    print("TRIANGULO ACUTANGULO")
if(a==b and a==c):
    print("TRIANGULO EQUILATERO")
if((a==b and a!=c) or (b==c and b!=a) or (a==c and a!=c)):
    print("TRIANGULO ISOSCELES")