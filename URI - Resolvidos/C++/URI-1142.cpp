#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

	int n,fix = 1;

	scanf("%d",&n);

	for(int i = 0; i<n; i++){
		for(int j=fix; j<fix+3; j++){
			printf("%d ", j);
		}

		fix=fix+4;
		printf("PUM\n");
	}
}