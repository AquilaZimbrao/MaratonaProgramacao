#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

	int opcao, inter=0, gremio=0, empate=0, cont=0, i, g;

	do{

		scanf("%d %d", &i, &g);

		if(i > g){
			inter++;
		}
		else{
			if(g > i){
				gremio++;
			}
			else{
				empate++;
			}
		}

		cont++;

		do{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &opcao);
		}while(opcao < 1 || opcao > 2);

	}while(opcao == 1);

	printf("%d grenais\n", cont);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);

	if(inter > gremio){
		printf("Inter venceu mais\n");
	}
	else{
		if(gremio > inter){
			printf("Gremio venceu mais\n");
		}
		else{
			printf("Nao houve vencedor\n");
		}
	}
	return 0;
}