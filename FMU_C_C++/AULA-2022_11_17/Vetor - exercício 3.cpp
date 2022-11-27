#include<stdio.h>

//IMC peso/altura²
int i, p;
float altura[5], peso[5], imc[5];
int main(){
	
for(i=0; i<5; i++){
		
	printf("\nDigite o peso da %dº pessoa: ", p=i+1);
	scanf("%f", &peso[i]);
	printf("\nDigite a altura da %dº pessoa: ", p=i+1);
	scanf("%f", &altura[i]);
	
	printf("\n---------------\\---------------\n");
		
	imc[i]= peso[i]/(altura[i]*altura[i]);
		
}

	printf("\n--Primeira pessoa: Peso(%.2f Kg) e Altura(%.2f cm) --> ICM %.2f\n",peso[0], altura[0], imc[0]);
	printf("\n--Terceira pessoa: Peso(%.2f Kg) e Altura(%.2f cm) --> IMC %.2f\n",peso[2], altura[2], imc[2]);
	printf("\n--Quinta pessoa: Peso(%.2f Kg) e Altura(%.2f cm) --> IMC %.2f\n",peso[4], altura[4], imc[4]);
	
	return 0;
}

