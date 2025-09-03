#include<stdio.h>
void main ()
{
    int repeat;
    printf("\n HOW MUCH DO YOU LOVE ON SCALE OF 1-10");
    scanf("\n%d",&repeat);
    printf("\n I LOVE YOU VERY");
    while (repeat>0)
    {
        printf("\tVERY");repeat--;
    }
    printf("\tMUCH");

}