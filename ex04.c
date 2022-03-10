#include <stdio.h>
#include <stdlib.h>

void vread(int *ptr, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Insira o elemento %d do vetor: ", i);
		scanf("%d", &ptr[i]);
	}
}

int main(){
	int n;
	
	printf("Insira a qtde de elementos do vetor: ");
	scanf("%d", &n);
	int *ptr;
	ptr = (int*)(malloc(n * sizeof(int)));
	
	if(ptr == NULL){
		printf("Erro ao alocar\n");
	}
	
	vread(ptr, n);
	
	int i;
	for(i = 0; i < n; i++){
		printf("%d\n", ptr[i]);
	}
	
	free(ptr);
	
	return 0;
}
