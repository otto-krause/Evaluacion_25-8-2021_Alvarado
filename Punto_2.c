#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int Dividendo=0, Divisor=0, Cociente=0, Resto=0, DividendoC=0, I=0;

    printf("Ingrese el dividendo de la operacion ");
    scanf("%d",&Dividendo);
    printf("Ingrese el divisor de la operacion ");
    scanf("%d",&Divisor);

    if (Dividendo>Divisor && (Dividendo && Dividendo)>0)
    {
        do {Dividendo=Dividendo-Divisor;
            Cociente=Cociente+1;
            }
        while(Dividendo>=0);

        printf("\nEl cociente de la division es %d", Cociente-1);
        printf("\nEl resto de la division es %d", Resto);
    }
    else
    {
        printf("No se puede realizar la division");
    }
}
