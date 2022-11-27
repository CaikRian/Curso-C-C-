#include<stdio.h>
#include<math.h> //biblioteca matemática

float n, qua, cub, raizq, raizc1, raizc2;

int main(){
	//comando de entrada
	 printf("Digite o numero \n");
	 scanf("%f",&n);
	 //calculos
	 
	 qua=pow(n,2);  // Nº elevado a dois
	 cub=pow(n, 3); // Nº elevado a tres
	 raizq=sqrt(n); // raiz quadrada de n
	 raizc1= cbrt(n); // raiz cubica de n
	 raizc2= pow(n,(1.0/3.0)); // raiz cubica de n
	 
	 //comando de saida
	 printf("\n Numero ao quadrado e %.2f, numero ao cubo e %.2f\n", qua, cub);
	 printf("\n Numero da raiz quadrada e %.2f, numero a raiz cubica e %.2f\n", raizq, raizc1);
	 printf("\n Numero a raiz cubica 2.... %.2f", raizc2);
	 return 0;	
	
}


