#include<stdio.h>

float n1, n2, n3;

int main(){
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%f", &n2);
	printf("Digite o terceiro valor:\n");
	scanf("%f", &n3);
	
	if(n1>n2&&n1>n3){
		if(n2>n3){
			printf(" Ordem crescente: %f, %f, %f", n3, n2, n1);
		}
		else {
			printf(" Ordem crescente: %f, %f, %f", n2, n3, n1);
			
		}
}
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			printf(" Ordem crescente: %f, %f, %f", n3, n1, n2);
		}
		else {
			printf(" Ordem crescente: %f, %f, %f", n1, n3, n2);
		}
		
	}
	else if(n3>n1 && n3>n2){
		if(n1>n2){
			printf(" Ordem crescente: %f, %f, %f", n2, n1, n3);
		}
		else {
			printf(" Ordem crescente: %f, %f, %f", n1, n2, n3);
		}
	}
	else{
		printf("ERRO! Digite numeros diferentes!");
}
	return 0;
}
