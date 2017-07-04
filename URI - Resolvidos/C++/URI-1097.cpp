#include <iostream>

using namespace std;

int main() {

int inic=7;

for(int i=1;i<=9;i++){
	for(int j=inic;j>=(inic-2);j--){
	printf("I=%d J=%d\n",i,j);
	}
i++;
inic=inic+2;
}
    return 0;
}