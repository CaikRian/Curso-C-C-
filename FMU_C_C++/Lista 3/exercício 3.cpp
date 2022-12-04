#include<stdio.h>

int main(){
	int neleitor, i, candidatoA=0, candidatoB=0, candidatoC=0, urna;
	printf("Digite quantas pessoas farao a pesquisa: ");
	scanf("%d", &neleitor);
	
	if(neleitor>0){
	printf("---Tabela de votacao---\n");
	printf(" Candidato A -> 1 \n Candidato B -> 2 \n Candidato C -> 3 \n");
	for(i=1;i<=neleitor;i++){

		printf("\n Digite o voto do(a) %dª eleitor(a): ", i);
		
		scanf("%d", &urna);
		if(urna==1){
			candidatoA++;
		}else if(urna==2){
			candidatoB++;
		}else if(urna==3){
			candidatoC++;
		}else{
			printf("Numero invalido!!! Digite um dos numeros da tabela!");
		}
		
	
	}
	printf("\n---RESULTADO DAS ELEICOES: \n");
	printf("Total de voto(s) do Candidato(a) A: %d\n", candidatoA);
	printf("Total de voto(s) do Candidato(a) B: %d\n", candidatoB);
	printf("Total de voto(s) do Candidato(a) C: %d\n", candidatoC);
	}else{
		printf("ERRO!!! Digite um numero maior que 0.");
	}
	
	
	return 0;
}
