#include<stdio.h>

int formap;
float compra;

int main(){
	
	printf("Digite o valor da compra: \n");
	scanf("%f", &compra);
	
	if(compra>0){
		
	printf("Se for a vista, digite a opcao '1'. Se for a prazo, digite a opcao '2'.\n");
	scanf("%d", &formap);
	
	switch(formap){
		
		case 1: printf("Foi aplicado um desconto de 10 por cento.\n");
		printf("A Vista com desconto: R$ %.2f.", compra*0.90);
		break;
		
		case 2: printf("Valor sem desconto.\n");
		printf("Valor a prazo; R$ %.2f.", compra);
		break;
		
		default: printf("Erro!! Numero invalido.\n Escolha opcao 1 ou 2.");
		
	}
} 
else{
	printf("Erro! Digite um valor de compra valido!");
}
	return 0;
}
