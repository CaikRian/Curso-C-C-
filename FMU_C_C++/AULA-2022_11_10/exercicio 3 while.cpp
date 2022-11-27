#include<stdio.h>

char resposta;
int cod, qtd;
float soma, valor;
int main(){
	
	printf("\nLanchonete do Rick\n");
	do{
	printf("\n____MENU____\n");
	printf("\nCOD 100 - Cachorro Quente: R$10,00\n");
	printf("\nCOD 101 - Refrigerante: R$5,00\n");
	printf("\n---//---\n");
	
	
	printf("\nDigite o codigo do produto: \n");
	scanf("%d", &cod);

	printf("\nDigite a quantidade desejada: \n");
	scanf("%d", &qtd);
	
	if(cod==100){
		
	valor=qtd*10.00;
	}else if(cod==101){
		valor=qtd*5.00;
	}
	soma=soma+valor;
	printf("Valor Atual: R$%.2f \n", valor);
	printf("Deseja mais algum produto?:(S) Sim ou (N)\n");
	scanf(" %c", &resposta);
	
}
	while(resposta=='S' || resposta=='s');
	printf("Total a pagar: R$%.2f\n.", soma);
	
	return 0;
}

