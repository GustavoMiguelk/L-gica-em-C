#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horas, min, seg;
	
	printf("Insira os segundos:\n");
	scanf("%d", &seg);
	
	min = seg / 60;
	horas = min / 60;
	
	printf("Horas:%d\n", horas);
	printf("Minutos:%d\n", min);
	printf("segundos:%d\n", seg);
	
	
	
}
