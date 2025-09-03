#include<stdio.h>
void main()
{ 
int a,b,c;
char op,con;
printf("\n enter the first number here:-");
scanf("%d",&a);
/*
1=+;
2=-;
3=*;
4=/;
*/
printf("\n ENTER THE CONDITION NUMBER HERE:-");
scanf("%s",&con);
printf("\n enter the second number here:-");
scanf("%d",&b);

  
  switch(con)
  { 
    case '1': c=a+b;  printf("\n The sum ans is :- %d",c) ;break;
    case '2': c=a-b; printf("\n the sub ans is:-%d",c);break;
    case '3': c=a*b; printf("\n the mul ans is:-%d",c);break;
    case '4': c=a/b; printf("\n the div ans is:-%d",c);break;
 default : printf("\n Enter a Valid operator");
  }
}