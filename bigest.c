#include<stdio.h>
void main()
{
    int a,b,c;
printf("\n ----------------TO CHECK THE BIGGEST NUMBER----------------\n");
printf("\n enter the first number here:-");
scanf("%d",&a);
printf("\n enter the second number here:-");
scanf("%d",&b);
printf("\n enter the third number here:-");
scanf("%d",&c);
if(a>b && a>c)
printf("\n First no %d is Bigggest No",a);
else
if(b>a && b>c)
printf("\n Second no %d is Biggest no"),b;
else
if(c>a && c>b)
printf("\n Third no %d is Biggest no",c);
else
if(a==b && b==c)
printf("\n All no are Equal");

}