#include<stdio.h>


int main(){
	
	int i, n[10], acum=0;
	
	for(i=0;i<10;i++){
		
		printf("\nDigite o %d numero: ", acum=i+1);
		scanf("%d", &n[i]);
		
		if(n[i]<=0){n[i]=1;}
		
	}
	for(i=0;i<10;i++){
		
			printf("\n X[%d] = %d ", i, n[i]);
	}
	
	return 0;
}
