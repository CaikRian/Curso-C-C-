#include<stdio.h>

int codigo, quantia;
float preco;
int main(){
	printf("Produtos....\n");
	printf("1 - Cachorro Quente | Preco da unidade: R$4,00\n");
	printf("2 - X-Salada | Preco da unidade: R$4,50\n");
	printf("3 - X-Bacon | Preco da unidade: R$5,00\n");
	printf("4 - Torrada simples | Preco da unidade: R$2,00\n");
	printf("5 - Regrigerante | Preco da unidade: R$1,50\n");
	
	printf("\nDigite o codigo do produto:\n");
	scanf("%d", &codigo);
	printf("\nQuantos voce vai querer?\n");
	scanf("%d", &quantia);
	
	if(quantia>0){
		
		if(codigo==1){
			preco=quantia*4;
			printf("Pedido realizado!\n Preco unitario: R$ 4,00 \n Quantidade: %d \n Valor total a ser pago pelo(s)) Cachorro Quente: R$ %.2f", quantia, preco);
		}
		else if(codigo==2){
			preco=quantia*4.50;
			printf("Pedido realizado!\n Preco unitario: R$ 4,50 \n Quantidade: %d \n Valor total a ser pago pelo(s) X-Salada: R$ %.2f", quantia, preco);
		} 
		else if(codigo==3){
			preco=quantia*5;
			printf("Pedido realizado!\n Preco unitario: R$ 4,50 \n Quantidade: %d \n Valor total a ser pago pelo(s) X-Bacon: R$ %.2f", quantia, preco);
		} 
		else if(codigo==4){
			preco=quantia*2;
			printf("Pedido realizado!\n Preco unitario: R$ 4,50 \n Quantidade: %d \n Valor total a ser pago pela(s) Torradas(s) Simples R$ %.2f", quantia, preco);
		}  
		else if(codigo==5){
			preco=quantia*1.50;
			printf("Pedido realizado!\n Preco unitario: R$ 4,50 \n Quantidade: %d \n Valor total a ser pago pelo(s) Refrigerante(s): R$ %.2f", quantia, preco);
		} 
		else{
			printf("Erro!!! Digite um codigo de produto valido!");
		}
	}
	else{
		printf("Digite uma quantidade maior que 0!");
	}
	return 0;
}
