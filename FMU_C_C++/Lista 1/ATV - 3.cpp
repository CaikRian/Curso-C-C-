#include<stdio.h>

float km, result;
 int main(){
 	
 	printf("APLICATIVO TAXI-ON \n");
 	printf("-----\\\-----\n");
 	printf("Aplicativo tem taxa de 3,44!\n");
 	printf("-----\\\-----\n");
 	printf("FIQUE CIENTE: R$: 0,86 a cada KM rodado!\n");
 	printf("\n");
 	printf("Digite a quantidade de km rodado:\n");
 	scanf("%f", &km);
 	
 	result= 3.44+(km*0.86);
 	
 	
 	printf("Os km rodados foram: %f \n", km);
 	printf("Valor a ser pago pela corrida: R$: %.2f", result);
 	
 	
 	return 0;
 	
 	
 }
