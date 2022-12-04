#include<stdio.h>



int main(){
	
	int i, vn[10];
	
	for(i=0;i<10;i++){
		
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &vn[i]);
		
	}
	
	printf("\nOrdem inversa:\n ");
	for(i=9;i>=0;i--){
		
		printf("\n-- %d  ", vn[i]);
	
		
	}
	
	
	return 0;
}
