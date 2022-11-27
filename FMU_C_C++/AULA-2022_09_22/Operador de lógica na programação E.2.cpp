#include<stdio.h>

//Operadores lógicos
// '&&' significa "e" na programação
// '||' significa "ou" na programação

 float idade, trabalho;
 
 int main(){
 
 printf("Digite quantos anos voce possui: \n");
 scanf("%f", &idade);
  printf("Quanto tempo voce trabalhou: \n");
  scanf("%f", &trabalho);
  
  if(idade>=65 || trabalho>=30 || idade>=60 && trabalho>=25){
  	
  	printf("Voce pode se aposentar: \n");
  	
  	
  }
  else{
  	printf("Voce NAO pode se aposentar: \n");
  }
  
 
  returno 0;
 
 
 }
