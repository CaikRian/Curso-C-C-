#include<stdio.h>

int main(){

float hora, valorH, salarioBruto, ir, inss, sindicato, salarioLiquido;


	printf("Digite quanto voce ganha por hora: \n");
	scanf("%f", &valorH);
	printf("Quantas horas voce trabalhou em 1 mes? \n");
	scanf("%f", &hora);

		if(valorH>=0 && hora>=0){

			salarioBruto= hora*valorH;
			ir=  salarioBruto * 11/100;
			inss= (salarioBruto+ir)* 8/100;
			sindicato= (salarioBruto+ir+inss)*5/100;
			salarioLiquido= salarioBruto-(ir+inss+sindicato);
			
			
			printf(" Salario Bruto: + R$ %.2f \n", salarioBruto);
			printf(" Imposto de Renda: - R$ %.2f \n", ir);
			printf(" INSS: - R$: %.2f \n", inss);
			printf(" Sindicato: - R$: %.2f \n", sindicato);
			printf(" Salario Liquido: = R$: %.2f \n", salarioLiquido);
		
		}
				else{
	
					printf("Nao pode valor negativo!");
				}
				
return 0;
}
