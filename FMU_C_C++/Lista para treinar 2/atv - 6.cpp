#include<stdio.h>

int main(){
	
	int i, nn;
	float n, media;
	
	do{
	printf("\nQuantas notas pretende digitar?: ");
	scanf("%d", &nn);
	if(nn<=0){
	printf("ERRO!!! Digite um numero valido!\n");
	}else{  
	for(i=1;i<=nn;i++){
		
		do{
		printf("\nDigite a %d nota: ", i);
		scanf("%f", &n);
		if(n>=0){
		media=media+n;
		
	}else{
		printf("ERRO!!! Digite apenas nota a partir de 0.\n");
	}}while(n<0);
	}
	}}while(nn<=1);
	printf("\nMedia de notas: %.0f/%d = %.2f", media, nn, media/nn);
	
	return 0;
}
