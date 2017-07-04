#include <iostream>

using namespace std;

int main() {

int numero;

do{
scanf("%d",&numero);

if(numero!=2002)
printf("Senha Invalida\n");
else
printf("Acesso Permitido\n");
}while(numero != 2002);
    return 0;
}