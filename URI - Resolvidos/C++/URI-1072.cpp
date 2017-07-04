#include <iostream>

using namespace std;

int main() {
	int num, in=0,out=0,d;

	scanf("%d",&d);

	for(int i = 0; i < d; i ++){
		scanf("%d", &num);

		if(num >= 10 && num <= 20){
			in ++;
		}
		else{
			out ++;
		}
	}

	printf("%d in\n%d out\n",in,out);

    return 0;
}