#include <bits/stdc++.h>

using namespace std;

int c[10000];
int v[10000];
int dp[10000];

int solve(int n, int t){
	int res = 0;

	if(t == 0){
		return 0;
	}

	if(dp[t] != -1){
		return dp[t];
	}

	for(int i = 0; i< n; i++){

		if(t >= c[i]){
			res = max(res, v[i] + solve(n, t-c[i]));
		}
	}

	return dp[t] = res;
}

int main(){
	int n, t;

	memset(dp, -1 , sizeof(dp));

	scanf("%d %d", &n, &t);

	for(int i = 0;i<n;i++){
		scanf("%d %d", &c[i],&v[i]);
	}

	printf("%d\n",solve(n,t));

return 0;
}