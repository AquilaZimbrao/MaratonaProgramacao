#include <iostream>

using namespace std;

int main() {

int N,a,b,soma;

scanf("%d", &N);

for(int i=1;i<=N;i++){
soma=0;
scanf("%d %d", &a,&b);

    if(a>b){
	for(int j=b+1;j<a;j++){
	if(j%2 != 0)
	soma += j;
	}
    }

    if(a<b){
	for(int j=a+1;j<b;j++){
	if(j%2 != 0)
	soma += j;
	}
    }

printf("%d\n",soma);

}

    return 0;
}