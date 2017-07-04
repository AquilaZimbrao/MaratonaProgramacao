#include <iostream>

using namespace std;

int main() {
 	double valor;
	int nota100=0,nota50=0,nota20=0,nota10=0,nota5=0,nota2=0,moeda1=0,moeda50=0,moeda25=0,moeda10=0,moeda5=0,moeda1cent=0;

	scanf("%lf",&valor);

	while(valor >= 100.00){
		valor = valor-100.00;
		nota100 ++;
	}
	while(valor >= 50.00){
		valor = valor-50.00;
		nota50++;
	}
	while(valor >= 20.00){
		valor = valor-20.00;
		nota20++;
	}
	while(valor >= 10.00){
		valor = valor-10.00;
		nota10++;
	}
	while(valor >= 5.00){
		nota5 = valor / 5.00;
		valor = valor-5;
	}
	while(valor >= 2.0){
		valor = valor-2.00;
		nota2++;
	}


	while(valor >= 1.0){
		valor = valor-1.00;
		moeda1++;
	}
	while(valor >= 0.5){
		valor = valor-0.50;
		moeda50++;
	}
	while(valor >= 0.25){
		valor = valor-0.25;
		moeda25++;
	}
	while(valor >= 0.10){
		valor = valor-0.10;
		moeda10++;
	}
	while(valor >= 0.05){
		valor = valor-0.05;
		moeda5++;
	}
	while(valor >= 0.01){
		valor = valor-0.01;
		moeda1cent++;
	}

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",nota100);
	printf("%d nota(s) de R$ 50.00\n",nota50);
	printf("%d nota(s) de R$ 20.00\n",nota20);
	printf("%d nota(s) de R$ 10.00\n",nota10);
	printf("%d nota(s) de R$ 5.00\n",nota5);
	printf("%d nota(s) de R$ 2.00\n",nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",moeda1);
	printf("%d moeda(s) de R$ 0.50\n",moeda50);
	printf("%d moeda(s) de R$ 0.25\n",moeda25);
	printf("%d moeda(s) de R$ 0.10\n",moeda10);
	printf("%d moeda(s) de R$ 0.05\n",moeda5);
	printf("%d moeda(s) de R$ 0.01\n",moeda1cent);
    return 0;
}