#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, s, m;
	
	printf("Informe o primeiro número:\n");
	scanf("%d", &n1);
	printf("Informe o segundo número:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro número:\n");
	scanf("%d", &n3);
	printf("Informe o quarto número:\n");
	scanf("%d", &n4);
	
	s = n1 + n2 + n3 + n4;
	
	m = n1 + n2 + n3 + n4 / 4;
	
	printf("Soma dos valores: %d\n", s);
	printf("Média aritmética simples: %d\n", m);
	
	return 0;
}
