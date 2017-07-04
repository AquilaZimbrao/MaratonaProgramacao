#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, x0, y0;


	while(scanf("%d",&n), n){
		scanf("%d %d",&x0,&y0);

		for(int i=0;i<n;i++){
			int x,y;
			scanf("%d %d",&x,&y);
			if(x == x0 || y == y0){printf("divisa\n");}
			else if(x > x0 && y > y0){printf("NE\n");}
			else if(x > x0 && y < y0){printf("SE\n");}
			else if(x < x0 && y < y0){printf("SO\n");}
			else if(x < x0 && y > y0){printf("NO\n");}
		}
	}
	return 0;
}