#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n,m,cont=0;

	do{
	scanf("%d",&n);

	for(int i = 1; i <= n; i++){

		if(i == n){
			printf("%d\n", i);
		}
		else{
			printf("%d ", i);
		}
	}
	}while(n!=0);

}