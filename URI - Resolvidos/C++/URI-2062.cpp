#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;

	scanf("%d",&n);

	char mat[n][20];

	for(int i = 0; i<n; i++){
		scanf("%s", mat[i]);

		if(strlen(mat[i]) == 3){
			if(strstr(mat[i],"OB") != NULL || strstr(mat[i],"UR") != NULL){
				mat[i][2] = 'I';
			}
		}
	}

	for(int i=0; i<n;i++){
		printf("%s", mat[i]);

		if(i != n-1){
			printf(" ");
		}
		if(i == n-1){
			printf("\n");
		}
	}


	return 0;
}