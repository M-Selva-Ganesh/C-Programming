#include <stdio.h>

int main(void)
{
    char str[31], ch;
    int i, len, pos, j;
    printf("Enter The Word : ");
    gets(str);

    for(len = 0; str[len] != '\0'; len++);

    for(i = 0; i < len-1; i++) 
    {
        if(str[i] == str[i+1]) 
        {
            for(j = i+1; j < len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
        }
    }
    printf("Changed Word : %s ", str);
    return 0;
}
