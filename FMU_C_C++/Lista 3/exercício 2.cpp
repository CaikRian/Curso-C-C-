#include<stdio.h>

int main(){
	int npessoa, i;
	float idade, mgeral;
	printf("Digite quantas pessoas farao a pesquisa: ");
	scanf("%d", &npessoa);
	if(npessoa>0){
			
	for(i=1;i<=npessoa;i++){
		
		printf("\n Digite a idade da %dª pessoa: ", i);
		scanf("%f", &idade);
		
		if(idade>0){
			
			mgeral=mgeral+idade;
		}else{
			printf("ERRO!! Digite um numero maior que zero.");
		}
	}
    mgeral=mgeral/npessoa;
	printf("\n--Participou/Participaram %d pessoa(s) na pesquisa. Media Geral Calculada: %.2f\n ", npessoa, mgeral);
	printf("Categorias: Jovem entre [0 e 25]; Adulta entre [26 e 60]; Idosa [Maior que 60]\n");
	
	if(mgeral>0 && mgeral<25){
		printf("\nA turma entra na categoria jovem.");
	}else if(mgeral>26 && mgeral<60){
		printf("\nA turma entra na categoria adulta.");
	}else{
		printf("\nA turma entra na categoria idosa.");
	}
}else{
	printf("ERRO!! Digite um numero maior que zero.");
}	
	return 0;
}
