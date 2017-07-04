#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

	int x,y, soma=0,aux;

	scanf("%d %d", &x, &y);

	if(x > y){
		aux = y;
		y = x;
		x = aux;
	}

	for(int i=x+1; i < y; i++){

		if( (i%5) == 2 || (i%5) == 3){
			printf("%d\n", i);
		}
	}
	return 0;
}