#include <iostream>

using namespace std;

int main() {
	int A,B,C,maiorAB,resul;

	scanf("%d%d%d",&A,&B,&C);

	maiorAB=(A+B+abs(A-B))/2;
	resul=(maiorAB+C+abs(maiorAB-C))/2;

	printf("%d eh o maior\n",resul);

    return 0;
}