#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

	int gas=0,alc=0,dis=0,opcao;

	do{

		scanf("%d",&opcao);

		if(opcao == 1){
			alc++;
		}

		if(opcao == 2){
			gas++;
		}

		if(opcao == 3){
			dis++;
		}

	}while(opcao != 4);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alc);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", dis);
	return 0;
}