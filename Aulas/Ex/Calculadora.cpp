#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int op;
	float n1, n2, res;
	
	printf("Digite 1 para somar:\n");
	printf("Digite 2 para subtrair:\n");
	printf("Digite 3 para multiplicar:\n");
	printf("Digite 4 para dividir:\n");
	scanf("%d", &op);
	
	printf("Insira o primeiro número:\n");
	scanf("%f", &n1);
	
	printf("Insira o segundo número:\n");
	scanf("%f", &n2);
	
	if(op == 1){
		res = n1 + n2;
	} else {
		if(op == 2){
			res = n1 - n2;
		} else {
			if(op == 3){
				res = n1 * n2;
			} else {
				if(op == 4){
					res = n1 / n2;
				}	
			}
		}
	}
	
	printf("O Resultado é: %.2f\n", res);
	
}
