#include<stdio.h>

void calc(float massa, float acel);

int main(){
	
	float massa, acel;
	
	printf("Digite a massa do produto: ");
	scanf("%f", &massa);
	printf("Digite a aceleração do produto: ");
	scanf("%f", &acel);
	
	calc(massa, acel);
	return 0;
}

void calc(float massa, float acel){
	
	
	printf(" Massa: %.2f \n Aceleracao: %.2f \n A forca necessaria e: %.2f", massa, acel, massa*acel);
	
	
}
