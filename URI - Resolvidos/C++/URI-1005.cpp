#include <iostream>

using namespace std;

int main() {
    double a,MEDIA,nota1,nota2,b;

	scanf("%lf %lf", &a,&b);

	nota1=a*3.5;
	nota2=b*7.5;
	MEDIA=(nota1+nota2)/11;

	printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}