opr = input()
selecionados = list()
aceitos = [1,2,3,4,5,6,7,8,9,10,14,15,16,17,18,19,20,21,27,28,29,30,31,32,40,41,42,43,53,54]

for a in range(12*12):
    n = float(input())
    if(a in aceitos):
        selecionados.append(n)

if(opr == 'S'):
    print(round(sum(selecionados),1))
else:
    print(round(sum(selecionados)/len(selecionados),1))
