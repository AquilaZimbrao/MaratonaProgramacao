#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n,aux=0;

	scanf("%d",&n);
	aux =n;

	for(int i=1;i<n;i++){
		aux = aux * (n-i);
	}

	printf("%d\n", aux);
}