#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

   int n,mul2,mul3,mul4,mul5,a;
   mul2 = 0;
   mul3 = 0;
   mul4 = 0;
   mul5 = 0;

   scanf("%d", &n);

   for(int i=0;i<n;i++){
   	scanf("%d", &a);

   	if(a%2 == 0){
   		mul2++;
	   }
	if(a%3 == 0){
   		mul3++;
	   }
	if(a%4 == 0){
   		mul4++;
	   }
	if(a%5 == 0){
   		mul5++;
	   }
   }


   printf("%d Multiplo(s) de 2\n", mul2);
   printf("%d Multiplo(s) de 3\n", mul3);
   printf("%d Multiplo(s) de 4\n", mul4);
   printf("%d Multiplo(s) de 5\n", mul5);


    return 0;
}