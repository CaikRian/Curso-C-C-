#include<stdio.h>

int main(){
	
	float n;
	
do{
	printf("\nDigite uma nota: ");
	scanf("%f", &n);
	
	if(n<=0 || n>=10){ 
	printf("ERRO!!! Digite apenas numero entre 0 e 10. Tente novamente.\n");}
	

  }while(n<=0 || n>=10);
	
	return 0;
	
}
