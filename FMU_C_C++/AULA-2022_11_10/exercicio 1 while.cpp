#include<stdio.h>
int n, i=0;
float acum=0, num;
int main(){
	
	printf("Digite quantos numeros voce vai digitar: \n");
	scanf("%d", &n);
	
	while(i<n){
		
		printf("Digite um numero: \n");
		scanf("%f", &num);
		if(num>0){
			acum=acum+num;
		}else{
			printf("Digite apenas numero positivo"); //acum+=num
		}
		
	i++;	//incrementando o i
	}
	printf("Soma de todos os numeros: %.2f", acum);
	
	
	return 0;
}
