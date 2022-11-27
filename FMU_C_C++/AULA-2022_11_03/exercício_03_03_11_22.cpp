#include<stdio.h>


int i;
float n, ncum, media, tcum;

int main(){
	
	for(i=1; i<=20; i++){
		
		printf("\nDigite o %d numero: \n", i);
		scanf("%f", &n);
		if(n<50){
			ncum=ncum+n;
		}
		tcum=tcum+n;
		
	}
	media=tcum/20;
	printf("----Valor da soma efetuada dos valores menores que 50: %.2f.\n", ncum);
	printf("----A media de todos os numeros e: %.2f.", media);
	
	return 0;
}
