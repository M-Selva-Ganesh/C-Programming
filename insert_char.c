#include <stdio.h>

int main(void)
{
    char str[30], ch;
    int i, len, pos;
    printf("Enter The Word : ");
    gets(str);
    for(len = 0; str[len] != '\0'; len++);

    printf("Enter The postion of Charcter : ");
    scanf("%d", &pos);
    printf("Enter The Charcter : ");
    scanf(" %c", &ch);
    for(i = len ; i >= pos-1; i--) {
        str[i+1] = str[i];
    }
    str[pos-1] = ch;
    printf("Changed Word : %s ", str);
    return 0;
}
