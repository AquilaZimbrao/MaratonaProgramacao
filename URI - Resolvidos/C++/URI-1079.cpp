#include <iostream>

using namespace std;

int main() {

double a,b,c;
int N;

scanf("%d",&N);

	for(int i=1;i<=N;i++){
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("%.1lf\n",((a*2+b*3+c*5)/10));
	}

    return 0;
}