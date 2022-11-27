#include<stdio.h>


int v1[20], v2[20], v3[20], i, p;
int main(){
	
	for(i=0; i<5; i++){
		
		printf("\nDigite o %dº Vetor1: ", p=i+1);
		scanf("%d", &v1[i]);
		
		printf("\nDigite o %dº Vetor2: ", p=i+1);
		scanf("%d", &v2[i]);
		
		v3[i]=v1[i]*v2[i];
		
	}
	for(i=0; i<5; i++){
		
		printf("Vetor1 [%d] * Vetor2 [%d] = %d x %d | Vetor3 [%d] = %d \n", i, i, v1[i], v2[i], i, v3[i]);
		
	}
	
	return 0;
}

