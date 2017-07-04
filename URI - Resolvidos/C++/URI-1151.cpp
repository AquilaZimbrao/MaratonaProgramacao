#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n, vector[3];

	scanf("%d", &n);

	vector[0]=0;
	vector[1]=1;

	if(n==1){
		printf("0\n");
	}
	else{
		if(n==2){
		printf("0 1\n");
		}
		else{

			printf("0 1");
			for(int i=0;i<n-2;i++){
				vector[2] = vector[0]+vector[1];
				printf(" %d", vector[2]);

				vector[0] = vector[1];
				vector[1] = vector[2];
			}
			printf("\n");
		}
	}


}