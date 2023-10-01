#include <stdio.h>

int main(void)
{
    char str[51];
    int i, ch = 0, word = 1, non_blank = 0;
    printf("Enter The Sentance : ");
    gets(str);
    
     for (i = 0; str[i] != '\0'; i++){
        ch++;
        
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            word++;
        else 
            non_blank++;
    }
    printf("Counting Of Characters In The Sentance is : %d \n", ch);
    printf("Counting Of Words In The Sentance is : %d \n", word);
    printf("Counting Of Non Blank Characters In The Sentance is : %d ", non_blank);
    return 0;
}
