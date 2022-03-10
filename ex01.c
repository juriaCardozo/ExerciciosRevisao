#include <stdio.h>

void converter(int totalMinutes, int *ptrhours, int *ptrminutes){
	*ptrhours = totalMinutes / 60;
	*ptrminutes = totalMinutes % 60;
}


int main(){
	int totalMinutes = 0;
	
	printf("Digite o tempo em minutos a ser convertido em horas: ");
	scanf("%d", &totalMinutes);
	
	int hours, minutes;
	
	converter(totalMinutes, &hours, &minutes);
	
	printf("%d minutos e %d horas e %d minutos", totalMinutes, hours, minutes);
	return 0;
}
