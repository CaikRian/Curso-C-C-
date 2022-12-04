#include<stdio.h>

int main(){
	int i, maiorq=0, menorq=0, cont;
	float vt[15], mediatemp;
	
	for(i=0;i<15;i++){
		
		printf("\nDigite a %d temperatura: ", cont=i+1);
		scanf("%f", &vt[i]);
		
		mediatemp=+vt[i];
		
		if(vt[i]<30){
			menorq++;
		}else{
			maiorq++;
		}
	}
	
	printf("Quantidade de temperaturas menores que 30 graus: %d\n", menorq);
	printf("Quantidade de temperaturas maiores que 30 graus: %d\n", maiorq);
	printf("Media Geral de temperaturas: %.2f graus\n", mediatemp/15);
	
	
	
	return 0;
}
