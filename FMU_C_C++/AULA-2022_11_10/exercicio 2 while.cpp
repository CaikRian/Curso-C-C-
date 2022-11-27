#include<stdio.h>
 
int i=1;
float salario;
int main(){
	
	while(i<=25){
	
	printf("\nDigite o salario do numero %dº: \n", i);
	scanf("%f", &salario);
	if(salario<1000){
		printf("\nVelho salario: %.2f", salario);
		printf("\nSalario do numero %dº: R$%.2f \n", i, salario=salario*1.30);
		
	}else{
		printf("\nNao tem direito de aumento. \n");
	}
	
	i++;
}
}
