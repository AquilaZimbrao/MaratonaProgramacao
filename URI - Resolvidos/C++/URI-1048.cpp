#include <iostream>

using namespace std;

int main() {

double salario_inicial, salario_novo,reajuste;
int percentual;


scanf("%lf",&salario_inicial);

if(salario_inicial > 0 && salario_inicial <= 400.00){
percentual = 15;
salario_novo = salario_inicial + ((salario_inicial/100)*15);
reajuste = salario_novo-salario_inicial;
}
else
if(salario_inicial >= 400.01 && salario_inicial <= 800.00){
percentual = 12;
salario_novo = salario_inicial + ((salario_inicial/100)*12);
reajuste = salario_novo-salario_inicial;
}
else
if(salario_inicial >= 800.01 && salario_inicial <= 1200.00){
percentual = 10;
salario_novo = salario_inicial + ((salario_inicial/100)*10);
reajuste = salario_novo-salario_inicial;
}
else
if(salario_inicial >= 1200.01 && salario_inicial <= 2000.00){
percentual = 7;
salario_novo = salario_inicial + ((salario_inicial/100)*7);
reajuste = salario_novo-salario_inicial;
}
else
if(salario_inicial > 2000.00){
percentual = 4;
salario_novo = salario_inicial + ((salario_inicial/100)*4);
reajuste = salario_novo-salario_inicial;
}

printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",salario_novo,reajuste,percentual);
    return 0;
}