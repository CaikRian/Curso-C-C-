#include<stdio.h>


int main(){
	
	int i, cont=0;
	
	char respost[5], quest[5][30] = {"Telefonou para a vitima?", "Esteve no local do crime?", "Mora perto da vitima?", "Devia para a vitima?", "Ja trabalhou com a vitima?" };
	
	printf("\n------\\\\\-------\n");
	printf("\nInterrogatorio criminal");
	
	printf("\nDigite 's' para sim ou 'n' para nao\n");
	
	for(i=0;i<5;i++){
		
		do{
		printf("\nVoce %s: ", quest[i]);
		scanf(" %c", &respost[i]);
		
		if(respost[i]=='s' || respost[i]=='S'){
		cont++;}
		else if(respost[i]!='n' && respost[i]!='N'){
			printf("ERRO!!! Digite apenas 's' para sim ou 'n' para nao.\n");
		}}while(respost[i]!='s' && respost[i]!='S' && respost[i]!='n' && respost[i]!='N');
		
	}
	if(cont==2){
		printf("\nVoce e considerado SUSPEITO");
		}else if(cont==3 || cont==4){
		printf("\nVoce e considerado CUMPLICE");
		}else if(cont==5){
		printf("\nVoce e considerado ASSASINO");
		}else{
		printf("\nVoce e considerado INOCENTE");
		}

return 0;
}
