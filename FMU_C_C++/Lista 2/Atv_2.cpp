#include<stdio.h>

float n1;

int main(){
	
	printf("Digite um valor:\n");
	scanf("%f", &n1);
	
	if(n1>=0 && n1<=25){
		
	printf("Este valor esta dentro do intervalo dentro de [0,25]");	
	
	}
	else if(n1>25 && n1<=50){
		
	printf("Este valor esta dentro do intervalo dentro de (25,50]");	
	
	}
	else if(n1>50 && n1<=75){
		
	printf("Este valor esta dentro do intervalo dentro de (50,75]");	
	
	}
	else if(n1>75 && n1<=100){
		
	printf("Este valor esta dentro do intervalo dentro de (75,100]");	
	
	}
	else{
		printf("Erro! Fora do intervalo.");
	}
	return 0;
}
