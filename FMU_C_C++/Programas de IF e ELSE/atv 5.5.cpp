#include<stdio.h>

int main(){
	
	float n1, n2;
	
	printf("Digite o numero 1\n");
	scanf("%f", &n1);
	
	printf("Digite o numero 2\n");
	scanf("%f", &n2);
	
	if(n1!=n2){
		
		if(n1>n2){
		
		printf("O maior numero e o %f", n1);
	}
			else{
				printf("O maior numero e o %f", n2);
			}	
	}
	else{
		
		printf("Digite numeros diferentes!");
	}
	
	return 0;
}
