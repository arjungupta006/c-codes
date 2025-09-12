#include <stdio.h>

int main() {
    int var = 10; 
    {
        int var = 20; 
        printf("Inside block, local var: %d\n", var);
    }
    printf("Outside block, global var: %d\n", var);

    return 0;
}
