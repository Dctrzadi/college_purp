#include<stdio.h>
    void main()
    {
        int a,b,c;
        char op;
        printf("- - - - - - - - - - - - - - - - - - - -");
        printf("\n Program For Simple Calculator ");
        printf("- - - - - - - - - - - - - - - - - - - -");
        printf("\n Enter the First no here :-");
        scanf("%d",&a);
        printf("\n Choose Your Operator :-");
        scanf("%s",&op);
        printf("\n Enter the Second no here :-");
        scanf("%d",&b);

        if(op=='+')
        {
            c=a+b;
        }
        else
        if(op=='-')
        c=a-b;
        
        else
        if(op=='*')
        c=a*b;

        else
        if(op=='/')
        c=a/b;
    
        printf("\n Your Ans is :- %d",c);

    }