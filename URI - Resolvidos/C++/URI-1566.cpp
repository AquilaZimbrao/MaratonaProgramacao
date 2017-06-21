#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,t;

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);

		int list[t];

		for(int j=0;j<t;j++){
			scanf("%d",&list[j]);
		}

		sort(list,list+t);

		printf("%d",list[0]);
		for(int i = 1;i<t;i++){
			printf(" %d",list[i]);
		}
		printf("\n");
	}


	return 0;
}

