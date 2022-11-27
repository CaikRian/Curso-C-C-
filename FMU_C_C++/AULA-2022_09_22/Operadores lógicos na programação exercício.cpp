//Operadores lógicos
// '&&' significa "e" na programação
// '||' significa "ou" na programação

 #include<stdio.h>
 
 float n1;
 
 int main(){
 printf("Digite um numero entre 5 e 100\n");
 scanf("%f", &n1);
 
	if(n1>=5 && n1<=100){
 	
 	printf("Seu numero esta entre 5 e 100.\n");
 	
 	}
 		else{
 			printf("Seu numero NAO esta entre 5 e 100.\n");
 			
 		}
 

 return 0;
 }
