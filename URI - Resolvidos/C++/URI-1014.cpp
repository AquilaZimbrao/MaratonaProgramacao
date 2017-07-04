#include <iostream>

using namespace std;

int main() {
	int X;
	double Y,resul;

	scanf("%d%lf",&X,&Y);

	resul=X/Y;

	printf("%.3lf km/l\n",resul);
    return 0;
}