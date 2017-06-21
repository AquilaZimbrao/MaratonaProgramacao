#include <bits/stdc++.h>

using namespace std;



int main(){
	int n,n_vagoes;

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&n_vagoes);

		int list[n_vagoes];
		for(int j=0;j<n_vagoes;j++){
			scanf("%d", &list[j]);
		}

		int result = 0,aux, ordenado = 1;
		while(ordenado){
			int r=0;
			for(int a=0;a<n_vagoes-1;a++){
				if(list[a+1] < list[a]){
					r++;
					aux = list[a];
					list[a] = list[a+1];
					list[a+1] = aux;
				}
			}

			if(r > 0){
				result += r;
			}
			else{
				ordenado = 0;
			}
		}

		printf("Optimal train swapping takes %d swaps.\n",result);
	}

	return 0;
}

