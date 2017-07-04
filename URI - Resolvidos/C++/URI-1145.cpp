#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n,m,cont=0;

	scanf("%d %d",&n, &m);

	for(int i = 1; i <= m; i++){

		printf("%d", i);
		cont++;

		if(cont == n){
			printf("\n");
			cont=0;
		}
		else{
			printf(" ");
		}
	}
}