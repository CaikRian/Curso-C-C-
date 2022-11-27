#include<stdio.h>
/* 
vetor:
Vetor[5] = [1],[2],[3],[4],[5]
Pº =       0º ,1º, 2º, 3º, 4º 
*/
int i, v[5], p;
int main(){
	//preencher o vetor
	for(i=0;i<5;i++){
		printf("Digite o %d numero: ", p=i+1);
		scanf("%d",&v[i]);
	}
	for(i=0;i<5;i++){
		printf("Vetor V[%d] = %d\n", i, v[i]+2);
	}

	
	return 0;
}





