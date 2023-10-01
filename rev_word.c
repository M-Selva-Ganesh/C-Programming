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
    for(i = 0; i < j ; i++) /* we can also use len/2 instead of j */
    {  
        ch = str[i];  
        str[i] = str[j];  
        str[j] = ch; 
        j--;
    }  
    printf("Reversed Word : %s ", str);  
    return 0;
  
}
