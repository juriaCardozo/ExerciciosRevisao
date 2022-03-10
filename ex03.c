#include <stdio.h>
#include <stdlib.h>

int potencia(int i, int j){
    if(j == 0)
        return 1;
    else
        return i * potencia(i, j - 1);
}

int main () {

    int j, i;

    printf("Digite o valor para X e para N: ");
    scanf("%d%d", &i, &j);

    printf("Resultado de %d elevado a %d: %d\n", i, j, potencia(i, j));

    return 0;
}
