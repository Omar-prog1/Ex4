#include<stdio.h>

int main()
{
    float peso, altura, IMC;
    printf("\nHernández Flores Ricardo Omar");
    printf("\n\n Programa 4");
    printf("\n\n calcular el índice de masa corporal");
    printf("\n\n Dame tu peso");
    scanf("%f",&peso);
    printf("\n\n Dame tu altura");
    scanf("%f",&altura);
    IMC = peso /(altura*altura);
    printf("\n La masa muscular es %f", IMC);
    return 0;
    
    
}