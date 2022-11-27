#include<stdio.h>

int i, alunos, maioralun;
float altura, raio, volume, maiorvol;

int main(){
	
	printf("Digite a quantidade de alunos tem na sala: \n");
	scanf("%d", &alunos);
	if(alunos>0){
	
	for(i=1; i<=alunos; i++){
		printf("ALUNO %d", 1);
		printf("\nDigite a altura do aluno(a): \n" );
		scanf("%f", &altura);
		printf("Digite a raio do aluno(a): \n" );
		scanf("%f", &raio);
		
		printf("Volume do aluno(a): %.2f \n", volume=3.141592*raio*raio*altura);
		printf("\n____________\\______________\n");
		
		if(volume>maiorvol){
			maiorvol=volume;
			maioralun=i;
		}
		else{}
		}
		
	  printf("\nO maior valume e do %d aluno(a), e de: %.2f \n", maioralun, maiorvol);
}
else{ 
printf("ERRO!!!! Digite um numero maior que zero");
}
	  return 0;
}
