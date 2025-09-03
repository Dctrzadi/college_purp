#include<stdio.h>
    
    
    void main()
    {
        int a,b,c,ch;

        printf("\n |===================== CALCULATOR ======================|");
        printf("\n |-------------------------------------------------------|");
        printf("\n | Choose your Choice                                    |");
        printf("\n | 1. Sum  \n 2. Sub \n 3. Multi  \n 4. Divide|");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: sum(); break;
        }
    }