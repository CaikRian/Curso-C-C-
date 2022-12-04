#include<stdio.h>

int main(){
	
	int n, i, result;
	
	printf("Digite o numero fatorial: ");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
		
	result=result*i;
		
	}
	
	
	printf("O fatorial de %d! = %d", n, result);
	
	
	return 0;
}
