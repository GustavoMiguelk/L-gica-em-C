#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	int n1, i;
	
	printf("Digite um número:\n");
	scanf("%d", &n1);
	
	for(i = 1; i<= 10; i++){
		printf("%d x %d = %d\n", n1, i, n1*i);
	}
	return 0;
}
