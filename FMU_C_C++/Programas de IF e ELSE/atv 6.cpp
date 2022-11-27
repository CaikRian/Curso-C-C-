#include<stdio.h>
#include<math.h>


int main(){
	
	
	float p1x1, p1y1, p2x2, p2y2, distancia;
	
	printf("Plano Cartesiano\n");
	
	printf("Digite o X do PRIMEIRO Ponto flutante\n");
	scanf("%f", &p1x1);
	printf("Digite o Y do PRIMEIRO Ponto flutante\n");
	scanf("%f", &p1y1);
	printf("Digite o X do SEGUNDO Ponto flutante\n");
	scanf("%f", &p2x2);
	printf("Digite o Y do SEGUNDO Ponto flutante\n");
	scanf("%f", &p2y2);
	
	
	distancia=sqrt( pow( (p2x2-p1x1) ,2) + ( pow( (p2y2-p1y1) ,2) ) );
	
	printf("A distancia e de: %.4f", distancia);
	
	
	
	return 0;
}
