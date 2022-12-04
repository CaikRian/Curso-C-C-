#include<stdio.h>

int main(){
	
	int vn[10], i;
	
	for(i=0;i<10;i++){
		
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &vn[i]);
		
	}
	
	printf("\nNumero(s) maiores que 40:");
		
	for(i=0;i<10;i++){
	if(vn[i]>40){
			
			printf("\nV[%d] = %d", i, vn[i]);
			
	}
}
	
	return 0;
}
