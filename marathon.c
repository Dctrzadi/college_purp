#include<stdio.h>
int main ()
{
    /* PROGRAM FOR CALCULATING THE MARTHON DISTANCE */
    int miles,yards, kilometers;
    printf("\n PLEASE ENTER THE MILES HERE:-");
    scanf("%d",&miles);
    printf("\n PLEASE ENTER THE YARDS HERE:-");
    scanf("%d",&yards);
    kilometers=1.609*(miles+yards/1760.0);
    printf("\n THE DISTANCE OF MARATHON IS:-");
    printf("\n THE MILES IS:-%d and THE YARDS IS:-%d AND MARATHON IN KILOMETER IS:-%d",miles,yards,kilometers);
    return 0;

    
}