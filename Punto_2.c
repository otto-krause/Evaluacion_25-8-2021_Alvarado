#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Dividendo=0, Divisor=0, Cociente=0, Resto=0, DividendoC=0, I=0;

    printf("Ingrese el dividendo de la operacion ");
    scanf("%d",&Dividendo);
    printf("Ingrese el divisor de la operacion ");
    scanf("%d",&Divisor);

    if (Dividendo>Divisor && Dividendo>0)
    {
        do {
            Dividendo=Dividendo-Divisor;
            Cociente+=1;
            Resto=Dividendo;
            }
        while(Dividendo>=Divisor);

        printf("\nEl cociente de la division es %d y el resto %d", Cociente, Resto);
    }
    else
    {
        printf("No se puede realizar la division");
    }
}
