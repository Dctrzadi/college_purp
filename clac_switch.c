#include<stdio.h.>
void main()
{
    int a,b,c;
    char con;
 printf("\n ----------------PROGRAM FOR MAKING A CALCULATOR USING SWITCH CONDITIONS----------------\n");
 printf("\n ENTER THE FIRST NUMBER HERE:-");
 scanf("%d",&a);
 /*
 1=+
 2=-s
 3=*
 4=/
 */
printf("\n ENTER  THE CONDITION NUMBER HERE:-");
scanf("%s",&con);
 printf("\n ENTER THE SECOND NUMBER HERE:-");
 scanf("%d",&b);
switch (con)
{
    case '1': c=a+b; printf("\nYOUR SUM ANS IS:-%d",c);break;
    case '2': c=a-b; printf("\nYOUR SUB ANS IS:-%d",c);break;
    case '3': c=a*b; printf("\nYOUR MUL ANS IS:-%d",c);break;
    case '4': c=a/b; printf("\nYOUR DIV ANS IS:-%d",c);break;
    default:printf("\n PLEASE ENTER A VALID CONDITION NUMBER");
}
}
