#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

	int opcao, cont;
	float nota, soma;

	do{
		cont = 0;
		soma = 0;

		while( cont < 2){
			scanf("%f", &nota);

			if(nota > 10.0 || nota < 0.0){
				printf("nota invalida\n");
			}
			else{
				soma = soma + nota;
				cont = cont + 1;
			}
		}

		printf("media = %.2f\n", soma/2);

		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &opcao);
		}while(opcao < 1 || opcao > 2);

	}while(opcao == 1);
	return 0;
}