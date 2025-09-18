#include <stdio.h>

int fact(int n){
	if (n==1)
		return 1;
	else
		return n * fact(n-1);
}

int main(){
	int num;
	printf("Ingrese un número: ");
	scanf("%d", &num);
	printf("El factorial de %d es %d", num, fact(num));
}
