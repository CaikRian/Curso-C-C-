#include<stdio.h>


int valor, i;
int main(){
	printf("Digite um valor maior que zero:\n");
	scanf("%d", &valor);
	if(valor>0){
	
	for(i=valor;i>=0; i--){
		
		printf("Valor: %d \n", i);
		
	}
	
} else{
	printf("ERRO!!!! Apenas valores positivos.");
}
	return 0;
}
