#include<stdio.h>
#include<stdio.h>

int num, resto; 

int main(){
	printf("digite um numero: \n");
	scanf("%d", &num);
	
	resto= num%2;
	
	if(resto==0){
	
		printf("Seu numero e par");

}
else{
	printf("Seu numero e impar");
	
}

return 0;

}
