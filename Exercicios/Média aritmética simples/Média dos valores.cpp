#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, s, m;
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &n1);
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro n�mero:\n");
	scanf("%d", &n3);
	printf("Informe o quarto n�mero:\n");
	scanf("%d", &n4);
	
	s = n1 + n2 + n3 + n4;
	
	m = n1 + n2 + n3 + n4 / 4;
	
	printf("Soma dos valores: %d\n", s);
	printf("M�dia aritm�tica simples: %d\n", m);
	
	return 0;
}
