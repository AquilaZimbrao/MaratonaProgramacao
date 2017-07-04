#include <iostream>

using namespace std;

int main() {
	int cem,cinq,vinte,dez,cinco,dois,um,numero,rt1,rt2,rt3,rt4,rt5,rt6;

	scanf("%d",&numero);

	cem=numero/100;
	rt1=numero%100;

	cinq=rt1/50;
	rt2=rt1%50;

	vinte=rt2/20;
	rt3=rt2%20;

	dez=rt3/10;
	rt4=rt3%10;

	cinco=rt4/5;
	rt5=rt4%5;

	dois=rt5/2;
	rt6=rt5%2;

	um=rt6/1;

	printf("%d\n",numero);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinq);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);
    return 0;
}