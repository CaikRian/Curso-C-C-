#include<stdio.h>
/* 
primeiro o tamanho do vetor, segundo quantas letras
variavel char
palavra == %s
letra == %c
*/
char nome[5][10];
int i, p;

int main(){
	
	for(i=0; i<5; i++){
		
	printf("\nDigite a %d� palavra: ", p=i+1);
	scanf(" %s", nome[i]);
		
	}
	for(i=0; i<5; i++){
		
	printf("\n%d� palavra: %s", p=i+1, nome[i]);
	
	}

return 0;
}





