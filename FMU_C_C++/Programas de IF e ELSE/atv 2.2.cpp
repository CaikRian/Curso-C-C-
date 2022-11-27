#include<stdio.h>

int main(){
	float valor, desconto, valorfinal;
	
	printf("Digite o valor total das suas compras: \n");
	scanf("%f", &valor);
	
	if(valor>0 && valor<=100){
		
		desconto= valor * 5/100;
		valorfinal=valor-desconto;
		printf("Seu desconto e de: R$ %.2f \n", desconto);
		printf("Valor final com o desconto e de: R$ %.2f \n", valorfinal);
		
	}
	else if(valor>0 && valor>100){
		
		desconto= valor * 10/100;
		valorfinal=valor-desconto;
		printf("Seu desconto e de: R$ %.2f \n", desconto);
		printf("Valor final com o desconto e de: R$ %.2f \n", valorfinal);
		
	}
	else{
		
		printf("Digite um valor valido!!");
		
	}

return 0;
}
