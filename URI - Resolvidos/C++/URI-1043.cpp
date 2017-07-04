#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
 float a,b,c, area,perimetro;

 scanf("%f %f %f",&a,&b,&c);

 if(a < b+c && b < a+c && c < a+b){
 	perimetro = a+b+c;
 	printf("Perimetro = %.1f\n",perimetro);
 }
 else{
 	area = (c*(a+b)) / 2;
 	printf("Area = %.1f\n",area);
 }

    return 0;
}