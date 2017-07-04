#include <iostream>

using namespace std;

int main() {

int numero,a;

scanf("%d",&a);

	for(int i=1;i<=10000;i++){

	if(i%a==2)
	printf("%d\n",i);
	}

    return 0;
}