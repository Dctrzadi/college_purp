#include<stdio.h>
    void main()
    {
        int a;
        printf("\n Enter the Any Day no here :-");
        scanf("%d",&a);

        switch(a)
        {
            case 1: printf("\n This is Sunday"); break;
            case 2: printf("\n This is Monday");  break;
            case 3: printf("\n This is Tuesday"); break;
            case 4: printf("\n This is Wednesday");break;
            case 5: printf("\n This is Thursday"); break;
            case 6: printf("\n This is Friday");break;
            case 7: printf("\n This is Saturday");break;


            default : printf("\n Enter a Valid Day no"); 
        }
    }