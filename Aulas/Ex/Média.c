#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, soma;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%d", &n1);
	printf("Insira o segundo n�mero:\n");
	scanf("%d", &n2);
	printf("Insira o terceiro n�mero:\n");
	scanf("%d", &n3);
	printf("Insira o quarto n�mero:\n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("Essa � a soma entre os n�meros inseridos: %d\n", soma);
	
	return 0;
}
