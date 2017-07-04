#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

   int hora, tempo_viagem, fuso, result;

   scanf("%d %d %d", &hora, &tempo_viagem, &fuso);

   result = (hora+tempo_viagem+fuso)%24;

   if(result < 0){
   	result = 24 + result;
   }

   printf("%d\n", result);

    return 0;
}