#include<stdio.h>

float km, result;
 int main(){
 	
 	printf("APLICATIVO TAXI-ON \n");
 	printf("-----\\\-----\n");
 	printf("Aplicativo tem taxa de 4,90!\n");
 	printf("-----\\\-----\n");
 	printf("FIQUE CIENTE: R$: 3,00 a cada KM rodado!\n");
 	printf("\n");
 	printf("Digite a quantidade de km rodado:\n");
 	scanf("%f", &km);
 	
 	result= 4.90+(km*3);
 	
 	
 	printf("Os km rodados foram: %f \n", km);
 	printf("Valor a ser pago pela corrida: R$: %.2f", result);
 	
 	
 	return 0;
 	
 	
 }
