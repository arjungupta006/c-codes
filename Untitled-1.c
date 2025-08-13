#include <stdio.h> 

int main() 
{
   int num1,num2;
   float result;
   printf("\n Enter two numbers.....");
   scanf("%d%d", &num1, &num2);
   result=num1/(float)num2;
   printf("\nThe div of two numbers=%f",result);

    return 0;
}