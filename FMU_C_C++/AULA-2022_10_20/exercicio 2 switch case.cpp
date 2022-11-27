#include<stdio.h>
int n;

int main(){
	printf("Digite um numero:\n");
	scanf("%d", &n);
	switch(n){
		case -10 ... 0: printf("Intervalo entre -10 e 0.");
		break;
		case 1 ... 11: printf("Intervalo entre 1 e 11.");
		break;
		case 12 ... 24: printf("Intervalo entre 12 e 2.");
		break;
		case 25: printf("Numero igual a 25");
		break;
		default: printf("Numero fora do intervalo");
		return 0;
	}
	
}
