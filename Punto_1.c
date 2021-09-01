#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Num=0, I=1, NumF1=0, NumF2=1, NumF3=0;
    printf("Ingrese el numero con el que desea realizar la sucesion: ");
    scanf("%d", &Num);

    printf("0 ");

        for (I; I<=Num; I++)
        {
            NumF3=NumF1+NumF2;
            NumF1=NumF2;
            NumF2=NumF3;

            printf("%d ", NumF1);
        }
    return 0;
}
