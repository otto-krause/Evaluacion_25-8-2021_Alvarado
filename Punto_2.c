#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Dividendo=0, Divisor=0, Cociente=0, Resto=0, RM=0;

    puts("Ingrese el dividendo de la operacion ");
    scanf("%d",&Dividendo);
    puts("Ingrese el divisor de la operacion ");
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
    
    for (Cociente; Cociente>=1; Cociente--)
    {
        RM=RM+Divisor;
    }
    
    printf("\nLa multiplicacion entre el cociente y el divisor es %d", RM);
    }
    else
    {
        puts("No se puede realizar la division");
    }
    return 0;
}
