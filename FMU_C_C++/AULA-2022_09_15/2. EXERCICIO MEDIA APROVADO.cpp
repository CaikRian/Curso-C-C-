#include<stdio.h>


float n1, n2, media; 

int main(){
	
	printf("digite a nota 1: \n");
	scanf("%f", &n1);
	printf("digite a nota 2: \n");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	
	if(media>=6){
		
		printf("Voce foi aprovado");
		
	}
	else{
		printf("Voce foi reprovado");
	}
	return 0;
}
