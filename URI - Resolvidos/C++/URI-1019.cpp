#include <iostream>

using namespace std;

int main() {
	int N,hora,min,seg,minfinal;

	scanf("%d",&N);

	min=N/60;
	hora=min/60;
	minfinal=min%60;
	seg=N%60;

	printf("%d:%d:%d\n",hora,minfinal,seg);
    return 0;
}