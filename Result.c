#include<stdio.h>
    void main()
    {
        char nm[15];
        float phy,chem,math,eng,com,total,per;

        
        
        printf("\n Name of Student :-");
        scanf("%s",&nm);
        printf("\n enter phy marks here:-");
        scanf("%f",&phy);
        printf("\n enter chem marks here:-");
        scanf("%f",&chem);
        printf("\n enter maths marks here:-");
        scanf("%f",&math);
        printf("\n enter eng marks here:-");
        scanf("%f",&eng);
        printf("\n enter com marks here:-");
        scanf("%f",&com);
        total=phy+chem+eng+math+com;
        per=total*100/500;

        printf("%s Your Total Marks Are :- %.2f",nm,total);
        printf("\n Your Percentage is :- %.2f",per);
         if (per>=60)
         printf("\n first divison");
         else
         if(per>=45)
         printf("\n second divison");
         else
         if(per>=33)
         printf("\n third divison");
          else
          printf("\n fail");
    }