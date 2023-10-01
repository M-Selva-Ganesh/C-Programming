#include <stdio.h>

int main(void)
{
    char str[30], ch;
    int i, len, j;
    printf("Enter The Word : ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++);
    len = i;
    j = len - 1;
    for(i = 0; i < len/2 ; i++){
        if (str[i] != str[j])
            printf("Given Word '%s' is Not a Palindrome", str);
        else
            printf("Given Word '%s' is a Palindrome", str);
            break;
    }
    return 0;
}
