#include<stdio.h>

float calculo(float a, float b, float c);//prototipo, caso eu queira criar uma fun��o em baixo da prim�ria

float calculo(float a, float b, float c){//a variavel recebida pode ser declarada com nome diferente.

float media;

media=(a+b+c)/3;


	return media;
}
/*float calculo(float a, float b, float c){

	return (a+b+c)/3;
} OUTRA OP��O Q FACILITA*/

int main(){
	float n1, n2, n3, medi;
	printf("Digite o 1� Numero: ");
	scanf("%f", &n1);
	
	printf("Digite o 2� Numero: ");
	scanf("%f", &n2);
	
	printf("Digite o 3� Numero: ");
	scanf("%f", &n3);

	medi= calculo(n1, n2, n3); //chamando a fun��o
	
	// 2� OP��O: printf("A media entre %.2f| %.2f| %.2f e igual %.2f.", n1, n2, n3, calculo(n1, n2, n3));
	printf("A media entre %.2f| %.2f| %.2f e igual %.2f.", n1, n2, n3, media);
	
	return 0;
}


