#include <iostream>

using namespace std;

int main() {

int N=100,a,maior=0,posicao;

	for(int i=1;i<=N;i++){
	scanf("%d",&a);

	if(a > maior){
	maior = a;
	posicao = i;
	}
	}

printf("%d\n%d\n",maior,posicao);

    return 0;
}