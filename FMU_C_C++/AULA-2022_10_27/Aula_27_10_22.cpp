#include<stdio.h>

//estrutura de repeti��o
//la�o contado: for
//La�o condicionado: while(condi��o){} e do{...} while(condi��o)
//conversor de farehaint para celsius
int f;
float c;
int main(){
	printf("TABELA DE CONVERSAO DE TEMPERATURA\n");
	printf("____________________________\n");
	for(f=50;f<=65; f++){
		
		c=0.56*(f-32);
		printf("\nGrau em Fahrenheit: %d\n", f);
		printf("Grau em Celsius: %.2f\n", c);
		printf("____________________________\n");
	}
	
	return 0;
}
