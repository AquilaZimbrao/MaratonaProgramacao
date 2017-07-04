#include <bits/stdc++.h>

int main(){
    int n,num;
    int pos =0, menor = 1000000;
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num<menor){
            pos = i;
            menor = num;
        }
    }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);

    return 0;
}