#include <stdio.h>
#include <conio.h>

int main(void)
{
	int matrix[3][3], i, j , row_sum, col_sum, dia_sum1, dia_sum2;
	clrscr();
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter The Value Of Matrix[%d][%d] : ", i, j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix : \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++){
		row_sum = 0;
		for(j=0; j<3; j++) {
		       row_sum = row_sum + matrix[i][j];
		}
		printf("Sum of Row (%d) : %d\n", i, row_sum);
	}
	for(j=0; j<3; j++){
		col_sum = 0;
		for(i=0; i<3; i++) {
		       col_sum = col_sum + matrix[i][j];
		}
		printf("\nSum of Column (%d) : %d", j, col_sum);
	}
	dia_sum1 = 0;
	dia_sum2 = 0;
	for(i=0; i<3; i++) {
		j= 2;
		dia_sum1 = dia_sum1 + matrix[i][i];
		dia_sum2 = dia_sum2 + matrix[i][j-i];
	}
	printf("\n\nSum of Left Diogonal : %d",  dia_sum1);
	printf("\nSum of Right Diogonal : %d", dia_sum2);

	getch();
	return 0;
}