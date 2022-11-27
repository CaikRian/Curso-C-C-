#include<stdio.h>

int main(){
	
	float peso, quiloextra, totalmulta;
	
	printf("Digite o peso do peixe capturado: \n");
	scanf("%f", &peso);
	
	if(peso>0){
		
		if(peso<=50){
			
			printf("Voce NAO excedeu o limite de 50 kilos exigido pelo Estado de SP.");
		}
		else{
			
			totalmulta=(quiloextra= peso-50)*4;
			
			printf("Seu peixe EXCEDEU os 50 quilos permitidos!\n");
			printf("Kilo excedido: %.2f KG\n", quiloextra);
			printf("Voce pagara uma multa de: R$ %.2f reais", totalmulta);
		}
	}
	
	else{
		printf("ERRO!! Digite um peso valido!!!");
	}
	
	return 0;
}
