#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, div, mult, sub, ad;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &n2);
	
	div = n1 / n2;
	mult = n1 * n2;
	sub = n1 - n2;
	ad = n1 + n2;
	
	printf("Adi��o: %d\n", ad);
	printf("Subtra��o: %d\n", sub);
	printf("Multiplica��o: %d\n", mult);
	printf("Divis�o: %d\n", div);
	
	
	
	
}
