#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv){
	
	float sal, perc, aumento, novosal;
	
	printf("Insira o salário:\n");
	scanf("%f", &sal);
	printf("Insira o percentual de aumento:\n");
	scanf("%f", &perc);
	
	aumento = sal * perc/100;
	novosal = sal + aumento;
	
	printf("Valor do aumento: %.2f\n", aumento);
	printf("Valor do novo salário: %.2f\n", novosal);
	
	return 0;
	
	
	
}
