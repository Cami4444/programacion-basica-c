#include <stdio.h>

void parteEnteraYDecimal(float numero, int *pe, float *pd){
	*pe = numero;
	*pd = numero - *pe;
}

int main(){
	float num, parteDecimal;
	int parteEntera;
	printf("ingrese un numero decimal; ");
	scanf("%f", &num);
	parteEnteraYDecimal(num, &parteEntera, &parteDecimal);
	printf("\nLa parte entera es %d y la parte decimal es %f", parteEntera, parteDecimal);
}
