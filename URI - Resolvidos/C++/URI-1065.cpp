#include <iostream>

using namespace std;

int main() {
	int cont=0, num;

	for(int i = 0; i < 5; i ++){
		scanf("%d", &num);

		if((num %2) == 0){
			cont ++;
		}
	}

	printf("%d valores pares\n",cont);
    return 0;
}