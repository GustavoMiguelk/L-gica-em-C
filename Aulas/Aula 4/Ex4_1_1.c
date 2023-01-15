#include <stdio.h>

int main(){
	
	float m;
	
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m>=7){
		printf("Aprovado!\n");
	}
	
	if(m<=3){
		printf("Reprovado :( \n");
	}
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	}
	
}
