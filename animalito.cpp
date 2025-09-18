#include<stdio.h>

int main(){
int option;

printf("Elija una opción:\n");
printf("1: Animal\n");
printf("2: Objeto\n");
printf("3: Cerrar el programa\n");
scanf("%d",&option);

if (option==1){
printf("\n");
printf(" 4-------4 \n");
printf(" | O   O | \n");
printf(" |_  Y  _| \n");
printf(" |== o ==| \n");
printf(" | w | w | \n");
printf(" |   |   | \n");
printf(" |   |   | \n");
printf("  ww   ww \n");
printf("\n");
}
if (option==2){
printf("\n");
printf("    ______   \n");
printf("   /    / |   \n");
printf("  /____/__|  \n");
printf("  | {} |[]|  \n");
printf("  =========  \n");
printf("\n");
}
if (option==3){
printf("Cerrando programa \n");
}
else {
printf("Por favor colocar un numero permitido \n");
}
return 0;
}


