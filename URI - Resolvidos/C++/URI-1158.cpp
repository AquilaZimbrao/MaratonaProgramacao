#include <iostream>

using namespace std;

int main() {

int soma,n,x,y;

scanf("%d",&n);
    for(int i=0;i<n;i++){

soma=0;

	scanf("%d %d",&x,&y);

	if(x%2 == 0){
	x++;
	}

	for(int j=0;j<y;j++){
	soma += x;

x++;
x++;
	}

	printf("%d\n",soma);

    }
    return 0;
}