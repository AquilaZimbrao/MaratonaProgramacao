#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

	int cod,qtd;
	double resultado;

	scanf("%d %d",&cod,&qtd);

	switch(cod){
		case 1:
			resultado = 4.00 * qtd;
			printf("Total: R$ %.2lf\n",resultado);
			break;
		case 2:
			resultado = 4.50 * qtd;
			printf("Total: R$ %.2lf\n",resultado);
			break;
		case 3:
			resultado = 5.00 * qtd;
			printf("Total: R$ %.2lf\n",resultado);
			break;
		case 4:
			resultado = 2.00 * qtd;
			printf("Total: R$ %.2lf\n",resultado);
			break;
		case 5:
			resultado = 1.50 * qtd;
			printf("Total: R$ %.2lf\n",resultado);
			break;
	}
}