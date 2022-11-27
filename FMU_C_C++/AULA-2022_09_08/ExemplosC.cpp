#include<stdio.h>
// digitar com float/double precisa de %f
//digitar numero int, precisa de %d
//para imprimir com duas casas decimais, precisa colocar ".2" entre %d



//EXEMPLO 1 __________________________________________
float n; //declaração de variavel
float p;
int main(){
	
	//comando de entrada
	printf("Digite um numero:\n");
	scanf("%f", &n);
	p=n-5;
	//comando de saída
	printf("O número digitado e %f", p);
	return 0;
	
	


//EXEMPLO 2 __________________________________________
int n1, n2, soma; //declaração de variavel

int main(){
	
	//comando de entrada
	printf("Digite o numero 1:\n");
	scanf("%d", &n1);
	printf("Digite o numero 2:\n");
	scanf("%d", &n2);
	
	soma=n1+n2;
	//comando de saída
	printf("A sua soma e %.2f", soma);
	return 0;
	

}


//EXEMPLO 3 __________________________________________

float base, altura, area;

int main(){
	
	printf("Digite a base:\n");
	scanf("%f", &base);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	area=(base*altura)/2;
	printf("A sua area é %f", area);
	
}

	
//EXEMPLO 4 __________________________________________
	
char genero, apelido[10], nome[40];
int main(){
	//comando de entrada
	printf("*********************\n");
	printf("****Cadastro do Paciente****\n");
		printf("DIGITE SEU NOME\n");
			scanf(" %[^\n]",&nome); //uma frase
			printf("digite seu genero\n");
			scanf(" %c",&genero); //uma letra
			printf("Como voce deseja ser chamado?\n");
			scanf(" %s",&apelido); //uma palavra
	//comando de saída
	printf("\n Nome: %s \n Apelido: %s \n Genero: %c\n", nome, apelido, genero);
	return 0;
	
	
	
	
}



























