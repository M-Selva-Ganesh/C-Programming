#include <stdio.h>
#include <conio.h>

int main(void)
{
	char str[21], ch;
	int i, j, len;
	clrscr();
	printf("Enter The Word : ");
	scanf("%s", &str);

	for(len=0; str[len] != '\0'; len++);

	for(i=0; i< len-1; i++){
		for(j=i+1; j<len; j++){
			if(str[i] > str[j]){
				ch = str [i];
				str[i] = str[j];
				str[j] = ch;
			}
		}
	}
	printf("Sorting Word : %s", str);
	getch();
	return 0;
}
