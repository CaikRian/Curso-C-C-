#include<stdio.h>
float n1, n2;
char op;
int main(){
	printf("CALCULADORA\n");
	printf("Digite o primeiro numero:\n");
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
		case '*': printf("Multiplica��o = %.2f\n", n1*n2); 
		break;
		case '/': if(n2!=0){printf("Divisao = %.2f\n", n1/n2);} 
		 	else{ printf("Opera��o Invalida!");}
		break;
		default: printf("Operador Invalido!");
	}
	return 0;
	
}
