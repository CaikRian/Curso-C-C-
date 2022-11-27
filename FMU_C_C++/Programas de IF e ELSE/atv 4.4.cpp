#include<stdio.h>

int main(){
	
	int senha;
	printf("Digite a senha: \n");
	scanf("%d", &senha);
	if(senha==4531){
		
		printf("Acesso AUTORIZADO!");
		
	}
	else{
		printf("Acesso NEGADO!");
	}
	
return 0;
}
