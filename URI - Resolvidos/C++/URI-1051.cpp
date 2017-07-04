#include <iostream>

using namespace std;

int main() {

double renda,imposto;

scanf("%lf",&renda);

if(renda<=2000){
printf("Isento\n");
}
else{
	if(renda>=2000.01 && renda<=3000.00){
	renda = renda-2000.00;
	imposto =(renda/100)*8;
	printf("R$ %.2lf\n",imposto);
	}
	else{
		if(renda>=3000.01 && renda <= 4500.00){
		renda = renda-3000.00;
		imposto = 80.00+((renda/100)*18);
		printf("R$ %.2lf\n",imposto);
		}
		else{
			if(renda > 4500.00){
			renda = renda-4500.00;
			imposto=350.00+((renda/100)*28);
			printf("R$ %.2lf\n",imposto);
			}
		}
	}
}
    return 0;
}