#include <stdio.h>
//Hacer un programa que pase dos variables por referencia a una función,
//y se devolveran llenas al programa principal con los valores requeridos

int devuelveMasUno(int a){
	a=a+1;
	return a+1;
}


void parteEnteraYDecimal(float numero, int *pe, float *pd){
	*pe = numero;
	*pd = numero - *pe;
}

int main(){
	/*printf("%d", devuelveMasUno(2));
	int b = 7;
	int c = devuelveMasUno(b);
	printf("%d", c);
	printf("%d", b);*/
	float num, parteDecimal;
	int parteEntera;
	printf("ingrese un numero decimal; ");
	scanf("%f", &num);
	parteEnteraYDecimal(num, &parteEntera, &parteDecimal);
	printf("\nLa parte entera es %d y la parte decimal es %f", parteEntera, parteDecimal);
}
