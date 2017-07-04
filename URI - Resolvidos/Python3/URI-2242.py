vogais = ("a","e","i","o","u")

riso = str(input())
normal = str()

for c in riso:
	if(c in vogais):
		normal = normal+c

if(normal == normal[::-1]):
	print("S")
else:
	print("N")