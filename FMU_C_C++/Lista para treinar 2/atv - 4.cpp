#include<stdio.h>

int main(){
	
	int i, resto;
	
	printf("Numeros impares entre 1 e 50.\n");
	for(i=1;i<=50;i++){
		
		resto=i%2;
		
		if(resto==1){
		
		printf("\n%d",i);}
		
	}
	
	
	return 0;
}
