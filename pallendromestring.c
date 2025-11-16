#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: "); 
    scanf("%s", str);   
    int max_len = 1;    
    int start = 0;
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0'; j++) {
            int flag = 1;
            len = j - i + 1;
            for (int k = 0; k < len / 2; k++) {
                if (str[i + k] != str[j - k]) {
                    flag = 0;
                    break;
                }
            }
            if (flag && len > max_len) {
                start = i;
                max_len = len;
            }
        }
    }
    printf("Longest palindromic substring is: ");
    for (int i = start; i < start + max_len; i++) {
    printf("%c", str[i]);
    }        
    printf("\n");
    return 0;
}
