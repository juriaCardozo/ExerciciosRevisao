#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct bandas{
	char nomeBanda[50];
	char tipoMusica[20];
	int integrantes;
	int ranking;
}BANDA;

void read_band(BANDA x[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Insira o nome da banda: ");
		getchar();
		fgets(x[i].nomeBanda, (50), stdin);
		x[i].nomeBanda[strlen(x[i].nomeBanda)-1] = '\0';
		
		printf("Insira o tipo musical da banda: ");
		getchar();
		fgets(x[i].tipoMusica, (20), stdin);
		x[i].tipoMusica[strlen(x[i].tipoMusica)-1] = '\0';
		
		printf("Insira a quantidade de integrantes: ");
		scanf("%d", &x[i].integrantes);
		printf("Insira o ranking da banda de 1 a 5: ");
		scanf("%d", &x[i].ranking);
		printf("\n");
	}
}

void print_band(BANDA *x, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nome da banda: %s\n", x[i].nomeBanda);
		printf("Tipo musical: %s\n", x[i].tipoMusica);
		printf("Qtde de integrantes: %d\n", x[i].integrantes);
		printf("Ranking: %d\n", x[i].ranking);
		printf("\n");
	}
}

void search_band(BANDA *x, int n){
	int buscar, i;
	printf("Insira um numero de 1 a 5: ");
	scanf("%d", &buscar);
	for(i = 0; i < n; i++){
		if(x[i].ranking == buscar){
			printf("Nome: %s\n", x[i].nomeBanda);
			printf("Estilo musical: %s\n", x[i].tipoMusica);
			printf("Integrantes: %d\n", x[i].integrantes);
			printf("Ranking: %d", x[i].ranking);
		}
	}

}

int main(){
	BANDA bandas[5];
	
	read_band(bandas, 5);
	print_band(bandas, 5);
	search_band(bandas, 5);
	
	return 0;
}
