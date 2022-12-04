#include<stdio.h>
#include<math.h>

float R, total, result;
 int main(){
 	
 	printf("Digite o valor do raio:\n");
 	scanf("%f", &R);
 	
 	
 	total= pow(R, 3);
    result= (4*3.14159*total)/3;
 	
 	
 	printf("O volume e de: %f", result);
 	
 	return 0;
 	
 }
