#include <stdio.h>
int main(){
	int v[5];
	int i;
	float s = 0;
	
	for(i=0;i<5;i++){
		printf("Insira um dado:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Dados inseridos: \n");
	for(i=0;i<5;i++){
		printf("%d ", v[i]);
	}
	
	for(i=0;i<5;i++){
		s += v[i];
	}
	printf("Media: %f\n", s/5);
	
}
	
