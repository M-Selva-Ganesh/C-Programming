#include <stdio.h>

int main(void)
{
    int num, ones, tens, hundreds;
    
    printf("Enter The Number between 0 to 9 : ");
    scanf("%d", &num);
    
    
        if (num == 0 )
        {
            printf("Zero");
        }
        else if(num <= 1 && num <= 999 )
            {
                hundreds = num /100;
                tens = (num % 10)/10;
                ones = num % 10; 
                switch (hundreds) {
                    case 1: printf("One Hundred "); break;
                    case 2: printf("Two Hundred "); break;
                    case 3: printf("Three Hundred "); break;
                    case 4: printf("Four Hundred "); break;
                    case 5: printf("Five Hundred "); break;
                    case 6: printf("Six Hundred "); break;
                    case 7: printf("Seven Hundred "); break;
                    case 8: printf("Eight Hundred "); break;
                    case 9: printf("Nine Hundred "); break; }
            }
                if(tens == 1)
                {
                switch (num){ 
                
                case 10: printf("Ten"); break;
                case 11: printf("Eleven"); break;
                case 12: printf("Twelve"); break;
                case 13: printf("Thirteen"); break;
                case 14: printf("Fourteen"); break;
                case 15: printf("Fifteen"); break;
                case 16: printf("Sixteen"); break;
                case 17: printf("Seventeen"); break;
                case 18: printf("Eighteen"); break;
                case 19: printf("Nineteen"); break;}
                }
                
                
                
                
                
                
                
                
                
                
            
              /*      
                    
                case 10: printf("Ten"); break;
                case 11: printf("Eleven"); break;
                case 12: printf("Twelve"); break;
                case 13: printf("Thirteen"); break;
                case 14: printf("Fourteen"); break;
                case 15: printf("Fifteen"); break;
                case 16: printf("Sixteen"); break;
                case 17: printf("Seventeen"); break;
                case 18: printf("Eighteen"); break;
                case 19: printf("Nineteen"); break;
                default :
                }
            }
        
            
            
            
            
            
           {
                {

                case 1: printf("One"); break;
                case 2: printf("Two"); break;
                case 3: printf("Three"); break;
                case 4: printf("Four"); break;
                case 5: printf("Five"); break;
                case 6: printf("Six"); break;
                case 7: printf("Seven"); break;
                case 8: printf("Eight"); break;
                case 9: printf("Nine"); break;
                default :
                }
            }
        else if (num < 20)
           
        else if
                {
                tens = num / 10;
                ones = num % 10; 
                switch(tens)
                {
               
                    case 2: printf("Twenty"); break;
                    case 3: printf("Thirty"); break;
                    case 4: printf("Forty"); break;
                    case 5: printf("Fifty"); break;
                    case 6: printf("Sixty"); break;
                    case 7: printf("Seventy"); break;
                    case 8: printf("Eighty"); break;
                    case 9: printf("Ninety"); break;
                    
                    
                
                if (ones > 0)
            
                    printf("%s %s" , tens,ones);
                }
            }*/

    return 0;
}
