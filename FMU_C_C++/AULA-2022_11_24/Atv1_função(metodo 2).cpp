#include<stdio.h>

void calculo(float a, float b, float c);//prototipo, caso eu queira criar uma fun��o em baixo da prim�ria

void calculo(float a, float b, float c){//a variavel recebida pode ser declarada com nome diferente.

float media;

media=(a+b+c)/3;

printf("A media entre %.2f| %.2f| %.2f e igual %.2f.", a, b, c, media);
	
}

int main(){
	float n1, n2, n3;
	printf("Digite o 1� Numero: ");
	scanf("%f", &n1);
	
	printf("Digite o 2� Numero: ");
	scanf("%f", &n2);
	
	printf("Digite o 3� Numero: ");
	scanf("%f", &n3);

	calculo(n1, n2, n3); //chamando a fun��o
	
	return 0;
}


