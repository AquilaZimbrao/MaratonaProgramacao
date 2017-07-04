#include <iostream>

using namespace std;

int main() {
 int a,b,tempo;

	scanf("%d",&a);
	scanf("%d",&b);

	if(a == b){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	else{
		if(a > b){
			tempo = (24 - a) + b;
			printf("O JOGO DUROU %d HORA(S)\n",tempo);
		}
		else{
			if(a < b){
				tempo = b - a;
				printf("O JOGO DUROU %d HORA(S)\n",tempo);
			}
		}
	}
    return 0;
}