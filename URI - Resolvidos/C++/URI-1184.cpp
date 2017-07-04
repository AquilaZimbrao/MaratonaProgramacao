#include <iostream>

using namespace std;

int main() {
int  z = 12;
	int cont=0;
	double matriz[z][z],soma;
	char operacao;

	scanf("%c", &operacao);

	for(int linha = 0; linha < z; linha++){
		for(int coluna = 0; coluna < z; coluna++){
			scanf("%lf", &matriz[linha][coluna]);

			if(coluna < linha){
				soma += matriz[linha][coluna];
				cont++;
			}
		}
	}

	if(operacao == 'S'){
		printf("%.1lf\n", soma);
	}
	else{
		printf("%.1lf\n", (soma/cont));
	}

    return 0;
}