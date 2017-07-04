#include <iostream>

using namespace std;

int main() {
	int dist,tempo,velo;
	float total;

	scanf("%d\n%d",&tempo,&velo);

	dist=tempo*velo;
	total=dist/12.00;

	printf("%.3f\n",total);
    return 0;
}