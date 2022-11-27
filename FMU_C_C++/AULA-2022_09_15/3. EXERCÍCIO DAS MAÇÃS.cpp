#include<stdio.h>

int qtde;
float total;
 int main(){
 	printf("As macas custam RS1,30 se comprar menos de uma duzia.\n");
 	printf("Se comprar mais de uma duzia, valem RS1,0 cada.\n");
 	
 	printf("Digite quantas macas você comprou.\n");
 	scanf("%d", &qtde);
 	
 	if(qtde>=12){
 		
 		total= qtde*1;
 		printf("Voce vai pagar RS: %.2f", total);
 		
 		
	 }
	 else{
	 	
	 	total= qtde*1.30;
 		printf("Voce vai pagar RS: %.2f", total);
	 }
 	
 }
