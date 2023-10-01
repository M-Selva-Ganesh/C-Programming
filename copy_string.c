#include <stdio.h>

int main(void)
{
    char str[30], copy[30], ch;
    int i;
    printf("Enter The Word : ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        copy[i] = str[i];
    }
    copy[i] = '\0';
    printf("Copy String : %s ", copy);
    return 0;
}
