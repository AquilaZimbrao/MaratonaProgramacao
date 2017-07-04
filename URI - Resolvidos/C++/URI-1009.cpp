#include <iostream>

using namespace std;

int main() {
	double salary,vendas,TOTAL,bonus;
	char nome[50];

	scanf("%s %lf %lf", nome,&salary,&vendas);

	bonus=vendas*0.15;
	TOTAL=salary+bonus;

	printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}