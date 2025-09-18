#include<stdio.h>
#define DIM 4

int main (){
	float notas[DIM];
	float acum;

	printf("\n");
	for(int i=0; i<DIM; i++)
		printf("%f\t", notas[i]);

	for(int i=0; i<DIM; i++){
		printf ("ingrese un valor para notas [%d]: \n", i);
		scanf("%f", &notas[i]);
	}
	
	acum=0;
	printf("\n");
	for(int i=0; i<DIM; i++){
		printf("%f\t", notas[i]);
		acum=notas[i] + acum;
	}
	
	printf("El priomedio de las notas ingresadas es %f", acum/DIM);	
		
}
