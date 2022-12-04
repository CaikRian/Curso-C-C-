#include<stdio.h>

int main(){
	
	int i, posi, vn[10], resto, cont1=0, cont2=0;
	
	for(i=0;i<10;i++){
	
	printf("\nDigite o %d numero: ", posi=i+1);
	scanf("%d", &vn[i]);
	
	resto=vn[i]%2;
	
	if(resto==0){
		cont1=cont1+1;
	}else{
		cont2=cont2+1;}
	}
	printf("Voce digitou os seguintes numeros:\n");
	for(i=0;i<10;i++){
	printf(" %d |", vn[i]);
    }
    printf("\nPossui %d numero(s) par(es) e %d numero(s) impar(es)", cont1, cont2);
	return 0;
}

