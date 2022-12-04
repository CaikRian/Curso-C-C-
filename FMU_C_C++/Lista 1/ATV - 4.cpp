#include<stdio.h>
#include<math.h>

int ni, ni2;
float nr, result1, result2, result3;
 int main(){
 	printf("Digite o 1º numero inteiro:\n");
 	scanf("%d", &ni);
 	printf("Digite o 2º numero inteiro:\n");
 	scanf("%d", &ni2);
 	printf("Digite um numero real:\n");
 	scanf("%f", &nr);
 	
 	result1= (ni*2)*(ni2/2);
 	result2=(ni*3)+nr;
 	result3= pow(nr, 3);
 	
 	printf("O produto do dobro do primeiro com metade do segundo e: %f \n", result1);
 	printf("A soma do triplo do primeiro com o terceiro e: %f\n", result2);
 	printf("O terceiro elevado ao cubo e: %f \n", result3);
 	
 }
 
 
 
 
 
