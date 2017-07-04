#include <iostream>

using namespace std;

int main() {

int N;
double a,b;

scanf("%d", &N);

for(int i=1; i<=N; i++){
  scanf("%lf %lf",&a,&b);
	if(b == 0){
	printf("divisao impossivel\n");
	}
	else{
	printf("%.1lf\n",(a/b));
	}

}
    return 0;
}