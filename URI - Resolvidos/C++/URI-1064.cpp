#include <iostream>

using namespace std;

int main() {

  double soma=0,n;
int cont=0;

    for(int i=0;i<6;i++){
	scanf("%lf",&n);

	if(n>0){
	soma += n;
	cont++;
	}

    }

	printf("%d valores positivos\n%.1lf\n",cont,(soma/cont));

    return 0;
}