#include<stdio.h>

// %c uma letra
// %s uma palavra
// [^\n] uma frase
int main(){
	
	int i, contA=0, contP=0, contV=0,contV169=0, contC=0, acum51, idade;
	float altura;
	char olho;	
	
	for(i=1; i<=5; i++){
		
		printf("\n%d pessoa---", i);
		printf("\nDigite a idade(anos): ");
		scanf("%d", &idade);
		printf("\nDigite a altura(cm): ");
		scanf("%f", &altura);
		printf("\nDigite a cor do seus ohos(A-Azul, P-Preto, V-Verde e C-Castanho): ");
		scanf(" %c", &olho);
		
		if(idade>50){acum51++;}
		if(altura>1.68 && olho!='V' && olho!='v'){contV169++;}
		if(olho=='A' || olho=='a'){contA++;}
		else if(olho=='P' || olho=='p'){contP++;}
		else if(olho=='V' || olho=='v'){contV++;}
		else if(olho=='C' || olho=='c'){contC++;}
		else{
			printf("\nERRO!!! Digite um dos codigos que representa a cor do seus olhos(A-Azul, P-Preto, V-Verde e C-Castanho): ");
		}
	}
	
	printf("\nQuantidade de pessoas com idade maior do que 50 anos: %d", acum51++);
	printf("\nQuantidade de pessoas com altura maior do que 1.68 e cor dos olhos diferente de Verde.: %d", contV169);
	
	
	
	
	return 0;
}
