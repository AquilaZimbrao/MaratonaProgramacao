#include <iostream>

using namespace std;

int main(){

	int m=1, n=2, i,f, sum;

	while( 1 == 1 ){

		sum = 0;
		scanf("%d %d", &m, &n);

		if(m <= 0 || n <= 0 || m == n){
			exit(0);
		}

		if( m > n){
			i = n;
			f = m;
		}
		else{
			i = m;
			f = n;
		}


		for( int a = i; a <= f; a++){
			printf("%d ", a);
			sum = sum + a;
		}
		printf("Sum=%d\n", sum);

	}
	return 0;
}