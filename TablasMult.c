//Proyecto para probar git, tablas de multiplicar del 1 al 10
#include<stdio.h>

int main(){
	int tabla,valor = 0,i;
	
	printf("Ingrese el numero de la tabla de multiplicar que desea ver: ");
	scanf("%i",&tabla);
	
	printf("\n\nLa tabla del %i es:\n",tabla);
	for(i = 1; i<=10; i++){
		valor = tabla*i;
		printf("%i\n",valor);
	}
	
	return 0;
}
