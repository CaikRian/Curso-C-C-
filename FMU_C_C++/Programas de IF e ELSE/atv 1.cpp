#include<stdio.h>


int main(){

float n1, n2, n3, n4, media;



printf("Digite a nota 1 \n");
	scanf("%f", &n1);
	printf("Digite a nota 2 \n");
	scanf("%f", &n2);
	printf("Digite a nota 3 \n");
	scanf("%f", &n3);
	printf("Digite a nota 4 \n");
	scanf("%f", &n4);

if((n1>=0 && n1<=10) && (n2>=0 && n2<=10) && (n3>=0 && n3<=10) && (n4>=0 && n4<=10)){

	media= (n1+n2+n3+n4)/4;
	
	printf("Sua média final é de: %.2f \n", media);
	}
		else{
			printf("Digite notas APENAS entre 0 a 10!! \n");
			
		}


return 0;


}
