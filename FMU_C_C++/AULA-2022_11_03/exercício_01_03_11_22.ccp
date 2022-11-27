#include<stdio.h>

int i;
float alt, cont=0;

int main(){
	
	printf("\n ANALISANDO A ALTURA DE 10 PESSOAS\n");
	for(i=1; i<=10; i++ ){
	
	printf("\nDigite a %d altura: \n", i);
	scanf("%f", &alt);
	
	if(alt<=0){
		printf("ERRO!!! Digite apenas numeros positivos!");
		break;
	}
	else if(alt>1.60){
		cont++;
	}
}

if(cont==0){
	
	printf("Nenhuma dessas pessoas é maior que 1,60 de altura.");
	
}else{
	printf(" %1.f pessoas sao maiores que 1,60.", cont);
}
	
	return 0;
}
