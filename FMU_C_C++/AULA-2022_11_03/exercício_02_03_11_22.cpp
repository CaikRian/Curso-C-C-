#include<stdio.h>


int i;
float media, acum=0, altura, cont=0;
int main(){
	
	for(i=1; i<=30; i++){
		
		printf("\nDigite a %d altura: \n", i);
		scanf("%f", &altura);
		if(altura>0){
		acum=acum+altura;
		if(altura<1.50){
			cont++;
		}
		}else{
		printf("ERRO!!! Digite apenas numero positivos!");
		break;
		
	}
	}
	if(acum>0){
	
	media=acum/30;
		
	printf("A altura media da sala, e de: %.2f.\n", media);
	printf("A somatoria dos numeros de altura de aluno: %.2f. \n", acum);
	printf(" %1.f pessoa(s) possue menos de 1,50 de altura", cont);
}
	return 0;

}
