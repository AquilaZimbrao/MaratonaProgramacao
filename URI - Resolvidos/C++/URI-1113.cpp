#include <iostream>

using namespace std;

int main() {

int N,a,b,soma;

while(scanf("%d %d",&a,&b),a != b){
    if(a>b)
	printf("Decrescente\n");
    if(a<b)
	printf("Crescente\n");
}

    return 0;
}