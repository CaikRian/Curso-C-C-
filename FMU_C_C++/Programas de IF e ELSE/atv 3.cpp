#include<stdio.h>

int main(){

float hora, valorh, salario;


	printf("Digite quanto voce ganha por hora: \n");
	scanf("%f", &valorh);
	printf("Quantas horas voce trabalhou em 1 mes? \n");
	scanf("%f", &hora);

		if(valorh>=0 && hora>=0){

			salario= hora*valorh;

			printf("O seu salario e de: R$ %.2f reais", salario);
		}
				else{
	
					printf("Nao pode valor negativo!");
				}
return 0;
}
