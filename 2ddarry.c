#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rows, col, i, j;
	int **p = NULL;

	printf("\n Enter the number of rows \n");
	scanf("%d", &rows);

	printf("\n Enter the number of col \n");
	scanf("%d", &col);


	for (i = 0; i < rows; i++) {
	
		p = realloc(p, sizeof(int*));
		p[i] = malloc(sizeof(int) * col);

	}

	printf("\n Enter the elements in to the array \n");

	for (i = 0; i < rows; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d",&p[i][j]);
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ",p[i][j]);
		}
	}
	
}
