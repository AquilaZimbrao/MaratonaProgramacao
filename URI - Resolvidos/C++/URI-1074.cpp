#include <iostream>

using namespace std;

int main() {

int numero,a;

scanf("%d",&a);

	for(int i=0;i<a;i++){
	scanf("%d",&numero);

	if(numero%2 == 0 && numero != 0)
	printf("EVEN ");

	if(numero%2 != 0 &&numero != 0)
	printf("ODD ");

	if(numero > 0 && numero != 0)
	printf("POSITIVE\n");

	if(numero < 0 && numero != 0)
	printf("NEGATIVE\n");

	if(numero == 0)
	printf("NULL\n");

	}

    return 0;
}