#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
 int a,b,c, menor[3];

 scanf("%d %d %d",&a,&b,&c);

 if(a < b && a < c){
 	menor[0] = a;
 	if(b<c){
 		menor[1] = b;
 		menor[2] = c;
 	}
 	else{
 		menor[1] = c;
 		menor[2] = b;
 	}

 }
 else{
 	if(b < a && b < c){
 		menor[0] = b;
 		if(a < c){
 			menor[1] = a;
 			menor[2] = c;
 		}
 		else{
 			menor[1] = c;
 			menor[2] = a;
 		}
 	}
 	else{
 		menor[0] = c;
 		if(a < b){
 			menor[1] = a;
 			menor[2] = b;
 		}
 		else{
 			menor[1] = b;
 			menor[2] = a;
 		}
 	}
 }

 printf("%d\n%d\n%d\n",menor[0],menor[1],menor[2]);
 printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}