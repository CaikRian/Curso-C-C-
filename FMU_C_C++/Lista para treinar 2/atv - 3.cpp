#include<stdio.h>

int main(){
	
	int i;
	float n, soma, media;
	
	for(i=1;i<=5;i++){
		
		printf("\nDigite o %d numero: ", i);
		scanf("%f", &n);
		
		soma=soma+n;
		
	}
	
	media=soma/5;
	
	printf("Soma: %.2f \n", soma);
	printf("Media: %.2f/5 = %.2f", soma, media);
	
	
	
	return 0;
}
