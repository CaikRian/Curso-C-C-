#include<stdio.h>

float a, b, c;
 
 int main(){
 
 printf("Digite o lado A do triangulo \n");
 scanf("%f", &a);
 
 printf("Digite o lado B do triangulo\n");
 scanf("%f", &b);
 
 printf("Digite o lado C do triangulo\n");
 scanf("%f", &c);
 
 if(a+b>c && a+c>b && c+b>a){
 
 	//equilatero
 	if(a==b&&b==c&&a==c){
 	
 		printf("O seu triangulo e um equilatero\n");
 	
 	}
 
 		//isoceles
 			else if(a==b||a==c||c==b){
 	
 			printf("O seu triangulo e um isoceles\n");
 	
 			}
 				//escaleno
 				else if(a!=b && a!=c &&b!=c){
 	
 				printf("O seu triangulo e um escaleno\n");
 	
 }
 
}
else{
	
	scanf("Isso não e um triangulo!!!");
	
}
 return 0;
}
 
 
 
 
 
 
 
 
 
