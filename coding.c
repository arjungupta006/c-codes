#include <stdio.h>

int main() {
    int i;
printf("Enter the digits divisible by 5 and 7 between 1 to 1000\n");
    for(i=1;i<=1000;i++)
    {
        if(i%5==0 && i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
