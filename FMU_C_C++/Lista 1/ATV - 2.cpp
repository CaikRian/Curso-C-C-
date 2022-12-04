#include<stdio.h>


float n1, n2, n3, media;
 int main(){
 	
 	printf("Digite a 1º nota\n");
 	scanf("%f", &n1);
 	printf("Digite a 2º nota\n");
 	scanf("%f", &n2);
 	printf("Digite a 3º nota\n");
 	scanf("%f", &n3);
 	
 	
 	printf("As notas digitadas fora: %.1f, %.1f, %.1f \n", n1, n2, n3);
 	printf("---------\\\\---------\n");
 	
 	media=(n1*2+n2*3+n3*5)/10;
 	
 	printf("Sua media final ponderada e de: %.1f", media);
 	
 	
 	return 0;
 	
 }
 
 
 
 
 
