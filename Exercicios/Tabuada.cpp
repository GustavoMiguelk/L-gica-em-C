#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	int n1, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
	
	printf("Digite um valor: \n");
	scanf("%d", &n1);

	t1 = n1 * 1;
	t2 = n1 * 2;
	t3 = n1 * 3;
	t4 = n1 * 4;
	t5 = n1 * 5;
	t6 = n1 * 6;
	t7 = n1 * 7;
	t8 = n1 * 8;
	t9 = n1 * 9;
	t10 = n1 * 10;
	
	printf("A Tabuada do %d é:\n", n1);
	
	printf("%d\n", t1);
	printf("%d\n", t2);
	printf("%d\n", t3);
	printf("%d\n", t4);
	printf("%d\n", t5);
	printf("%d\n", t6);
	printf("%d\n", t7);
	printf("%d\n", t8);
	printf("%d\n", t9);
	printf("%d\n", t10);
}
