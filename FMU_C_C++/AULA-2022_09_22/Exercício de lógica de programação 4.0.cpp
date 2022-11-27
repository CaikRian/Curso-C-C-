#include<stdio.h>


float n1, n2, media; 

int main(){
	
	printf("digite a nota 1: \n");
	scanf("%f", &n1);
	printf("digite a nota 2: \n");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	if(media<=10 && media>=0){
	
		if(media>=7 && media<=10){
		
		printf("Voce foi APROVADO!!");
		
		}	
				else if(media>=3 && media<7){
				printf("Voce esta de EXAME!!");
			}
					else if(media>=0 && media<3){
					printf("Voce esta de REPROVADO!!");
					}
						
	}
	else{
		printf("ERRO!!!!! Digite notas de 0 a 10!");
	}
	return 0;
}
