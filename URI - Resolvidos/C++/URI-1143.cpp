#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int n,fix = 1;

	scanf("%d",&n);

	for(int i = 1; i<=n; i++){

		printf("%.0f %.0f %.0f\n", pow(i,1),pow(i,2),pow(i,3));
	}
}