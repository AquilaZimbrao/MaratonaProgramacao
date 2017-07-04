#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int R;
	double pi, VOLUME;

	scanf("%d",&R);

	pi=3.14159;

	VOLUME=(4/3.0) * pi * pow(R, 3);

	printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}