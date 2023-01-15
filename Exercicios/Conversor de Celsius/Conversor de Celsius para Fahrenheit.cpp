#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int c,f;
	
	printf("Coloque o valor em Celsius: \n");
	scanf("%d", &c);
	
	f = c * 1.8 + 32;
	
	printf("%d", f);
	
}
