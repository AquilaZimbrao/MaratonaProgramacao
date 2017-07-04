#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int x,z,cont =0,aux=0;

	scanf("%d",&x);

	do{
		scanf("%d",&z);
	}while(z<=x);

	do{
		aux += x+cont;
		cont++;
	}while(aux < z);

	printf("%d\n", cont);

}