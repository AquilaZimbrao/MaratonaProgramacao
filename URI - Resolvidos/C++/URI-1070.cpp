#include <iostream>

using namespace std;

int main() {

int numero,j=0;

scanf("%d",&numero);
if(numero%2 == 0){
numero++;
}

for(int i=numero;j<6;i++,j++){
printf("%d\n",i);
i++;
}

    return 0;
}