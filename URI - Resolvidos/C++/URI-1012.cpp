#include <iostream>

using namespace std;

int main() {

    double A,B,C,tri,cir,tra,qua,ret,pi;

	scanf("%lf%lf%lf",&A,&B,&C);

	pi=3.14159;
	tri=(A*C)/2;
	cir=pi*(C*C);
	tra=(C*(A+B))/2;
	qua=B*B;
	ret=A*B;

	printf("TRIANGULO: %.3lf\n",tri);
	printf("CIRCULO: %.3lf\n",cir);
	printf("TRAPEZIO: %.3lf\n",tra);
	printf("QUADRADO: %.3lf\n",qua);
	printf("RETANGULO: %.3lf\n",ret);
    return 0;
}