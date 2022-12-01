#include<stdio.h>

int main(){
	
	float n1, n2;
	char op;
do{

	printf("\nCALCULADORA\n");
	printf("\nDigite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite a operacao |+, -, * ou /| \n");
	scanf(" %c", &op);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	
	switch(op){
		case '+': printf("Soma = %.2f\n", n1+n2); 
		break;
		case '-': printf("Subtracao = %.2f\n", n1-n2); 
		break;
		case '*': printf("Multiplicação = %.2f\n", n1*n2); 
		break;
		case '/': if(n2!=0){printf("Divisao = %.2f\n", n1/n2);} 
		 	else{ printf("Operacao Invalida! Impossivel dividir por zero.\n");}
		break;
		default: printf("\nERRO!!! TENTE NOVAMENTE....\n");
	}
	}while (op != '+' && op != '-' && op != '*' && op != '/');
	return 0;
	
}
