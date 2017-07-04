#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, m;
	char acao[6];

	scanf("%d %d", &n, &m);

	for(int i = 0; i<m; i++){
		scanf("%s", acao);

		if(!strcmp(acao, "fechou")){
			n+=1;
		}

		if(!strcmp(acao, "clicou")){
			n -= 1;
		}

	}

	printf("%d\n", n);
    return 0;
}