#include <iostream>

using namespace std;

int main() {

char bicho;
double coelho=0,rato=0,sapo=0,numero;
int N;

scanf("%d",&N);

	for(int i=1;i<=N;i++){
	scanf("%lf %c",&numero, &bicho);

	if(bicho == 'C')
	coelho +=numero;
	if(bicho == 'R')
	rato += numero;
	if(bicho == 'S')
	sapo += numero;
	}

double total = coelho+rato+sapo;
printf("Total: %.0lf cobaias\n",total);
printf("Total de coelhos: %.0lf\n",coelho);
printf("Total de ratos: %.0lf\n",rato);
printf("Total de sapos: %.0lf\n",sapo);
double p_coelho=(coelho*100)/total;
double p_rato= (rato*100)/total;
double p_sapo= (sapo*100)/total;
printf("Percentual de coelhos: %.2lf %%\n",p_coelho);
printf("Percentual de ratos: %.2lf %%\n",p_rato);
printf("Percentual de sapos: %.2lf %%\n",p_sapo);

    return 0;
}