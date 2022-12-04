#include<stdio.h>

int main(){
	
	int i;
	
	printf("Ordem crescente de 1 a 20:\n");
	
	for(i=1; i<=20; i++){
		
	printf("\n%d", i);
	
	}
	printf("\n-----------------------------\n");
	
	printf("Ordem decrescente de 20 a 1:\n");
	
	for(i=20; i>=1; i--){
		
	printf("\n%d", i);
	
	}
	
	
	return 0;
}
