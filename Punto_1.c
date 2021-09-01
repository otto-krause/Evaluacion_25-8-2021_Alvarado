#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Num=0, I=1, NumF1=1, NumF2=1, NumF3=1;
    printf("Ingrese el numero con el que desea realizar la sucesion: ");
    scanf("%d", &Num);

    switch (Num)
    {
    case 0:
        puts("0");
        break;

    case 1:
        puts("0, 1");
        break;
    
    default:
    printf("0 ");
        for (I; I<=Num; I++)
        {
            NumF3=NumF1+NumF2;
            NumF1=NumF2;
            NumF2=NumF3;

            printf("%d ", NumF1);
        }
        break;
    }
}
