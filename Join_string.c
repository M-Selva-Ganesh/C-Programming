#include <stdio.h>

int main(void)
{
    char str1[31], str2[31], join[62];
    int i, len, j;
    printf("Enter The First Word : ");
    gets(str1);

    printf("Enter The Second Word : ");
    gets(str2);
    
    for (i = 0; str1[i] != '\0'; i++)
        join[i] = str1[i];
    
    join[i] = ' ';
    for (j = 0; str2[j] != '\0'; j++){
        join[i + j + 1] = str2[j];
    }
    join[i + j + 1] = '\0';
    printf("Joined Word : %s ", join);
    return 0;
}
