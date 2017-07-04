c = int(input())
opr = input()
selecionados = list()
aceitos = list()

for a in range(12):
    aceitos.append(c+(a*12))

for a in range(12*12):
    n = float(input())
    if(a in aceitos):
        selecionados.append(n)
if(opr == 'S'):
    print(round(sum(selecionados),1))
else:
    print(round(sum(selecionados)/len(selecionados),1))