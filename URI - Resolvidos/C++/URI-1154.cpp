#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	float idade, cont=0,soma=0;
	float result;

	do{
		scanf("%f", &idade);

		if(idade>0){
			soma = soma + idade;
			cont++;
		}

	}while(idade > 0);

	result = soma/cont;

	printf("%.2f\n", result);
}