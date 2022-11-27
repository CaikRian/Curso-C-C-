#include<stdio.h>

float n1, n2;
int main(){
	
	do{
		printf("\nDigite o primeiro numero: \n");
		scanf("%f", &n1);
		printf("Digite o segundo numero: \n");
		scanf("%f", &n2);
		
		if(n1>n2){
			printf("--Ordem Decrescente--\n (N1,N2)=(%.2f, %.2f)\n", n1, n2);
		} else if(n1<n2){
			printf("--Ordem Crescente--\n (N1,N2)=(%.2f, %.2f)\n", n1, n2);
		}
		
	}while(n1!=n2);
	
	return 0;
}
