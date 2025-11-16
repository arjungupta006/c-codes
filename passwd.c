#include <stdio.h>

int main() {
    char passwd[100];
    int hasSpecial = 0, hasDigit = 0;   
    printf("Enter a password: ");   
    scanf("%s", passwd);
    for (int i = 0; passwd[i] != '\0'; i++) {
        if ((passwd[i] >= '!' && passwd[i] <= '/') || 
            (passwd[i] >= ':' && passwd[i] <= '@') || 
            (passwd[i] >= '[' && passwd[i] <= '`') || 
            (passwd[i] >= '{' && passwd[i] <= '~')) {
            hasSpecial = 1;
        }
        if (passwd[i] >= '0' && passwd[i] <= '9') {
            hasDigit = 1;
        }
    }
    if (hasSpecial && hasDigit) {
        printf("Strong password\n");
    } else {
        printf("Weak password\n");
    }   
    return 0;
}