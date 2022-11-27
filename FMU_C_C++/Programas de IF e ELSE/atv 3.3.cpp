#include<stdio.h>

int main(){
	
	char genero;
	float altura, pesoideal;
	
	printf("Digite seu genero (M)- Masculino ou (F)- Feminino:\n");
	scanf(" %s", &genero);
	
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	
	if( (genero== 'M' ||genero=='m') && altura>0){
		
		pesoideal=(72.7*altura)-58;
		
		printf("O peso ideal para o seu corpo MASCULINO e de: %.2f kg", pesoideal);
		
	}
	else if((genero=='F' ||genero=='f') && altura>0){
		
		pesoideal=(62.1*altura)-44.7;
		
		printf("O peso ideal para o seu corpo FEMININO e de: %.2f kg", pesoideal);
		
	}
	else{
		printf("ERRO!!! Digite numeros validos!");
		
	}
	
return 0;
}
