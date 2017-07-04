#include <iostream>

using namespace std;

int main() {
	int NUMBER,HORA;
	float SAL,SALARY;

	scanf("%d %d %f", &NUMBER,&HORA,&SAL);

	SALARY=SAL*HORA;

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER,SALARY);
    return 0;
}