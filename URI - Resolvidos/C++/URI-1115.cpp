#include <iostream>

using namespace std;

int main() {

int N,a,b,soma;

while(scanf("%d %d",&a,&b),a != 0 && b != 0){
    if(a>0 && b>0)
	printf("primeiro\n");
    if(a<0 && b>0)
	printf("segundo\n");
    if(a<0 && b<0)
	printf("terceiro\n");
    if(a>0 && b<0)
	printf("quarto\n");
}

    return 0;
}