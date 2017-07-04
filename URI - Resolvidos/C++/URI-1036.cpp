#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
 double A,B,C,delta,X1,X2;

	scanf("%lf %lf %lf",&A, &B, &C);

	delta= pow(B,2)-4*A*C;

	if(delta < 0 || A == 0){
		printf("Impossivel calcular\n");
	}
	else{
		X1 = (-B+sqrt(delta))/(2*A);
		X2 = (-B-sqrt(delta))/(2*A);

		printf("R1 = %.5lf\n",X1);
		printf("R2 = %.5lf\n",X2);
	}

    return 0;
}