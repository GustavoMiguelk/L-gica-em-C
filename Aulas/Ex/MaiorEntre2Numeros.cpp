#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%f", &n1);
	
	printf("Insira o segundo n�mero:\n");
	scanf("%f", &n2);
	
	
	if(n1 > n2){
		printf("Maior: %.2f\n", n1);
	}else{
		if(n1 < n2){
			printf("Maior: %.2f\n", n2);
		}else{
			if(n1 == n2){
				printf("Os n�meros s�o iguais.");
			}
		}
	}
}

