// ESTRUTURA CONDICIONAL - COMPOSTA

#include<stdio.h>

int main(){
	
	float n1, n2, soma, resultado;
	
	printf("Digite o numero 1: \n");
	scanf("%f", &n1);
	
	printf("Digite o numero 2: \n");
	scanf("%f", &n2);
	
	soma=n1+n2;
	
	if(soma>=10){
		
		resultado= soma*2;
		printf("O dobro deste valor e de: %f", resultado);
		
	}
	else if(soma<10){
		
		resultado= soma*3;
		printf("O triplo deste valor e de: %f", resultado);
		
	}
	
	return 0;
}
