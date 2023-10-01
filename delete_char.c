#include <stdio.h>

int main(void)
{
    char str[30], ch;
    int i, len, pos;
    printf("Enter The Word : ");
    gets(str);
    for(len = 0; str[len] != '\0'; len++);

    printf("Enter The postion of delete Charcter  : ");
    scanf("%d", &pos);
    
    for(i = pos-1 ; i < len ; i++) {
        str[i] = str[i+1];
    }
    str[len-1] = '\0' ;
    printf("Changed Word : %s ", str);
    return 0;
}
