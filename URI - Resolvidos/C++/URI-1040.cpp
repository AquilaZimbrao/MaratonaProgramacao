#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
 double nota1,nota2,nota3,nota4,notaexame,media,mediafinal;

 scanf(" %lf %lf %lf %lf",&nota1,&nota2,&nota3,&nota4);


 media= ((nota1*2)+(nota2*3)+(nota3*4)+nota4)/10;

 if(media >= 7.0){
 	printf("Media: %.1lf\n",media);
 	printf("Aluno aprovado.\n");
 }
 else{
 	if(media < 5.0){
 		printf("Media: %.1lf\n",media);
	 	printf("Aluno reprovado.\n");
 	}
 	else{
 		scanf("%lf",&notaexame);
 		printf("Media: %.1lf\n",media);
 		printf("Aluno em exame.\n");
 		printf("Nota do exame: %.1lf\n",notaexame);

 		mediafinal=(media+notaexame)/2;

 		if(mediafinal >= 5.0){
 			printf("Aluno aprovado.\n");
 			printf("Media final: %.1lf\n",mediafinal);
 		}
 		else{
 			printf("Aluno reprovado.\n");
 			printf("Media final: %.1lf\n",mediafinal);
 		}

 	}
 }
    return 0;
}