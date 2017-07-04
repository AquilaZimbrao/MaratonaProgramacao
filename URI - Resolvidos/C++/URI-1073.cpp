#include <iostream>

using namespace std;

int main() {

int soma=0,a,b;

scanf("%d",&a);

	for(int i=1;i<=a;i++){
	if(i%2 == 0){
	int result=i*i;
	printf("%d^2 = %d\n",i,result);
	}

	}

    return 0;
}