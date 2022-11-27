#include<stdio.h>

int main(){
	
	int horaViagem, velocMedia;
	float litro, km;
	
	
	printf("Litros gastos para um automovel de 12 KM/L\n");
	
	printf("\nDigite o tempo gasto na viagem, em horas: \n");
	scanf("%d", &horaViagem);
	
	printf("Digite a velocidade media durante a viagem, em km/h: \n");
	scanf("%d", &velocMedia);
	
		if(horaViagem>0 && velocMedia>0){
	
		km= horaViagem*velocMedia;
	
		litro=km/12;
	
		printf("Sera necessario: %.3f litros para a viagem.", litro);
	}

			else{
					printf("ERRO!! Digite valores validos!!");
				}
	
	return 0;
}
