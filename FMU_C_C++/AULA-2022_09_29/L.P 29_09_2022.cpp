	#include<stdio.h>
	int main(){
	
	int qtd;
	float preco, total, desconto, resultado;
	
	printf("Digite a quantidade de produto adquirida: \n");
	scanf("%d", &qtd);
	
	printf("Digite o preço unitario do produto: \n");
	scanf("%f", &preco);
	
	total=qtd*preco;
		
		printf("Voce comprou %d produto(s).\n", qtd);
		printf("Cada um valendo R$: %.2f produto(s).\n", preco);
		printf("O valor total (SEM DESCONTO) foi de: R$:%.2f. \n", total);
	
	if(qtd<=5){
		
		desconto=total*2/100;
		resultado=total-desconto;
	
		printf("Voce ganhou desconto de 2 por cento. \n");
		printf("Desconto aplicado: %.2f. \n", desconto);
		printf("O valor da sua compra COM DESCONTO, foi de: R$:%.2f.\n", resultado);
		
	}
	else if(qtd>=6 && qtd<=10){
		
		desconto=total*3/100;
		resultado=total-desconto;
		
		printf("Voce ganhou desconto de 3 por cento. \n");
		printf("Desconto aplicado: %.2f. \n", desconto);
		printf("O valor da sua compra COM DESCONTO, foi de: R$:%.2f.\n", resultado);
		
		
	}
	else if(qtd>10){
		
		desconto=total*5/100;
		resultado=total-desconto;
		
		printf("Voce ganhou desconto de 5 por cento. \n");
		printf("Desconto aplicado: R$:%.2f. \n", desconto);
		printf("O valor da sua compra COM DESCONTO, foi de: R$:%.2f.\n", resultado);
		
		
	}
	else{
		
	printf("DADOS INCORRETOS!! \n");

	}
	
	return 0;
}

