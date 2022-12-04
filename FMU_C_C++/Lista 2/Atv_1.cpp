#include<stdio.h>

int ddd;

int main(){
	
	printf("Digite um DDD:\n");
	scanf("%d", &ddd);
	
	if(ddd==61){
		printf("Este DDD e de Brasilia.");
	}
	else if(ddd==71){
		printf("Este DDD e de Salvador.");
	}
	else if(ddd==11){
		printf("Este DDD e de Sao Paulo.");
	}
	else if(ddd==21){
		printf("Este DDD e de Rio de Janeiro.");
	}
	else if(ddd==32){
		printf("Este DDD e de Juiz de Fora.");
	}
	else if(ddd==19){
		printf("Este DDD e de Campinas.");
	}
	else if(ddd==27){
		printf("Este DDD e de Vitoria.");
	}
	else if(ddd==31){
		printf("Este DDD e de Belo Horizonte.");
	}
	else{
		printf("DDD nao cadastrado! Tente novamente.");
	}
	return 0;
}
