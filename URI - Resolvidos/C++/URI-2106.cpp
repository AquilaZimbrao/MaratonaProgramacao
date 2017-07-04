#include <bits/stdc++.h>

using namespace std;

int n;
int mat[18][18];
int dp[18][1<<18];

int solve(int t, int cont){
	int res = 20000000;

	if(t >= n){
		return 0;
	}

	if(dp[t][cont] != -1){
		return dp[t][cont];
	}

	for (int i = 0; i < n; ++i)
	{
		if(!(cont & (1 << i))){
			res = min(res, mat[i][t]+solve(t+1, cont|1<<i));
		}
	}
	return dp[t][cont] = res;

}

int main(){

	while(scanf("%d", &n) && n){

		memset(dp,-1,sizeof(dp));

		for(int i = 0; i<n;i++){
			for(int j = 0; j<n;j++){
				scanf("%d",&mat[i][j]);
			}
		}
		printf("%d\n", solve(0,0));
	}

	return 0;
}