#include<stdio.h>

int main(){
	
	int idade;
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	if(idade>=5){
		if(idade>=5 && idade<=7){
			printf("Voce, nadador(a), sera colocado na categoria: INFANTIL.");
		}
		else if(idade>=8 && idade<=10){
			printf("Voce, nadador(a), sera colocado na categoria: JUVENIL.");
		}
		else if(idade>=11 && idade<=15){
			printf("Voce, nadador(a), sera colocado na categoria: ADOLESCENTE.");
		}
		else if(idade>=16 && idade<=30){
			printf("Voce, nadador(a), sera colocado na categoria: ADULTO.");
		}
		else if(idade>30){
			printf("Voce, nadador(a), sera colocado na categoria: SENIOR.");
		}
	}
	else{
		printf("ERRO!!! IDADE MINIMA PERMITIDA E DE 5 ANOS.");
	}

	return 0;
}
