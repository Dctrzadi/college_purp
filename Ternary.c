#include <stdio.h>
void main() {
//int num1 = 15; 
//int num2 = 10; 
// Using the ternary operator to find the maximum of two numbers 
char nm[15];

int num1,num2,maximum;

printf("\n Enter Your Name :-");
scanf("%s",&nm);

printf("\n %s ",nm);

printf("\n Enter The Numbere here :-");
scanf("%d %d",&num1, &num2);

 maximum = (num1 > num2) ? num1 : num2; 
printf("The maximum value is %d\n", maximum); 
}
