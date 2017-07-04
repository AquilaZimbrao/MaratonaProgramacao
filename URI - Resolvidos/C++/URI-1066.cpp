#include <iostream>

using namespace std;

int main() {

int par=0,impar=0,positivos=0,negativos=0,n;

    for(int i=0;i<5;i++){
	scanf("%d",&n);

	if(n%2==0){
	par++;
	}
	else{
	impar++;
	}


	if(n>0 && n!=0){
	positivos++;
	}
	if(n<0 && n!=0){
	negativos++;
	}

    }

	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,impar,positivos,negativos);
    return 0;
}