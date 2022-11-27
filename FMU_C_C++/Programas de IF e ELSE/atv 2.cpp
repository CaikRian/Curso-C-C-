#include<stdio.h>

int main(){
	
	float lado, area, area2x;
	
	
	printf("Digite a medida do lado do quadrado \n");
	scanf("%f", &lado);
	
	if(lado>0){
		
		area= lado*lado;
		area2x= area*2;
		
		printf("A area do seu quadrado e de: %.2f \n", area);
		printf("O DOBRO da area do seu quadrado e de: %.2f \n", area2x);
			
	}
	else{
		
		printf("Digite um numero maior que 0");
	}
	
	return 0;
}
