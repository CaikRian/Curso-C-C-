#include<stdio.h>

float x, y;
int main(){
	do{
		printf("Digite o valor de x: \n");
		scanf("%f", &x);
		printf("Digite o valor de y: \n");
		scanf("%f", &y);
		
		if(x>0 && y>0){
			printf("--Primeiro Quadrante--\n");
			printf("Valores (X,Y)=(%.2f, %.2f)\n", x, y);
		}else if(x<0 && y>0){
			printf("--Segundo Quadrante--\n");
			printf("Valores (X,Y)=(%.2f, %.2f)\n", x, y);
		}else if(x<0 && y<0){
			printf("--Terceiro Quadrante--\n");
			printf("Valores (X,Y)=(%.2f, %.2f)\n", x, y);
		}
		else if(x>0 && y<0){
			printf("--Quarto Quadrante\n--");
			printf("Valores (X,Y)=(%.2f, %.2f)\n", x, y);
		}

	}
	while(x!=0 && y!=0);
	
	return 0;
}
