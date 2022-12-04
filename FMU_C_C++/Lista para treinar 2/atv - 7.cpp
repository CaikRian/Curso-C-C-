#include<stdio.h>



int main(){

int i, cod;
float ncaixa[50];

printf("Loja Quase Dois - Tabela de precos\n");
for(i=1; i<=50; i++){
	
	printf("%d - R$: %.2f\n", i, ncaixa[i-1]=i*1.99 );
	
}
do{
	
printf("\nQuantos itens serao comprados?: ");
scanf("%d", &cod);

if(cod>0 && cod<51){
	
	printf("%d - R$: %.2f\n", cod, ncaixa[cod-1]);
	
}else{
	printf("ERRO!!! Digite numeros de 1 ate 50.");
}}while(cod<1 || cod>50);
	
	return 0;
}
