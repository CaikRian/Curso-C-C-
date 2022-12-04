#include<stdio.h>

int main(){
	int i, nteste, cont=1, cont2=1;
	float n1, n2, n3;
	
	printf("Digite quantos casos de testes: ");
	scanf("%d", &nteste);
	float vm[nteste];
	
	for(i=0; i<nteste;i++){
		
		printf("\n---------Caso %d de teste(media ponderada)\n", cont++);
		printf("\nDigite o primeiro valor(Peso 2): ");
		scanf("%f", &n1);
		printf("\nDigite o segundo valor(Peso 3): ");
		scanf("%f", &n2);
		printf("\nDigite o terceiro valor(Peso 5): ");
		scanf("%f", &n3);
		
		vm[i]=(n1*2+n2*3+n3*5)/10;
		
	}
	printf("\n----------------//--------------------\n");
	for(i=0; i<nteste;i++){
	
	printf("\n-----Caso %d de teste(media ponderada)= %.1f\n", cont2++, vm[i]);
	
	}
	
	
	return 0;
}
