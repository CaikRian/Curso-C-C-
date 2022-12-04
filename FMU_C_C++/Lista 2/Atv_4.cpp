#include<stdio.h>

float kgmorango, kgmaca, vtotal, totalmorango, totalmaca, kgtotal, desconto;

int main(){
	printf("MORANGO - R$2,50 por Kg(Ate 5Kg) --- R$2,20 Acima de 5Kg\n");
	printf("MACA - R$1,80 por Kg(Ate 5Kg) --- R$1,50 Acima de 5Kg\n");
	printf("\nSe comprar mais de 8Kg, ou o valor ultrapassar R$25,00 GANHE DESCONTO DE 10%\n");
	
	printf("\nDigite quantas Kg de Morangos:\n");
	scanf("%f", &kgmorango);
	
	printf("Digite quantas Kg de Maca:\n");
	scanf("%f", &kgmaca);
	
	if(kgmorango>0 && kgmaca>0){
		
		if(kgmorango<=5){
			
			totalmorango=kgmorango*2.50;
		}
		else {
			
			totalmorango=kgmorango*2.20;
		}
		
		if(kgmaca<=5){
			totalmaca=kgmaca*1.80;
		}
		else {
			totalmaca=kgmaca*1.50;
		}
	
	    vtotal=totalmorango+totalmaca;
	    kgtotal=kgmorango+kgmaca;
	    
	    if(vtotal>25 || kgtotal>8){
	   	
	    	vtotal=vtotal-(vtotal*0.10);
	    	
	    printf("Total de Kg de Morango: %.2f ----- Valor a ser pago por Kg de Morango: R$ %.2f \n", kgmorango, totalmorango);
	    printf("Total de Kg de Maca: %.2f ----- Valor a ser pago por Kg de Maca: R$ %.2f \n", kgmaca, totalmaca);
	    printf("\n Valor total a ser pago pelas frutas(DESCONTO DE 10 por cento): R$ %.2f", vtotal);
	    	
		}
		else{
		
		printf("Total de Kg de Morango: %.2f ----- Valor a ser pago por Kg de Morango: R$ %.2f \n", kgmorango, totalmorango);
	    printf("Total de Kg de Maca: %.2f ----- Valor a ser pago por Kg de Maca: R$ %.2f \n", kgmaca, totalmaca);
	    printf("\n Valor total a ser pago pelas frutas: R$ %.2f", vtotal);
		}
	}
	else{
		printf("Erro, digite um valor maior que 0.");
	}
	
	return 0;
}

