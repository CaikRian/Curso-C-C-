#include<stdio.h>

int main(){
	
	float altura, pesoideal;
	
	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	
	if(altura>0){
		
		pesoideal=(72.7*altura)-58;
		
		printf("\n O seu peso ideal e de: %.2f Kg \n ", pesoideal);
		
		
	}
	else{
		printf("Numero invalido!");
		
	}
	return 0;
}
