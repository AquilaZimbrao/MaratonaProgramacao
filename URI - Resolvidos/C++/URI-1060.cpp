#include <iostream>

using namespace std;

int main() {
float num;
	int positivo = 0, j;

	for(j=0;j<6;j++){

 		scanf("%f", &num);

		if(num == 0){
			scanf("%f",&num);
		}

		if(num > 0){
			positivo ++;
		}
 	}



	printf("%d valores positivos\n",positivo);
    return 0;
}