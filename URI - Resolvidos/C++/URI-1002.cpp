#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double raio,A,PI;

	scanf("%lf", &raio);

	PI=3.14159;
	A=PI*pow(raio,2);

	printf("A=%.4lf\n", A);

    return 0;
}