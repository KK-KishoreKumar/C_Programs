#include <stdio.h>
#include <stdlib.h>

void main(int j)
{
	printf("%d",j);
	(&main + (&exit - &main) * (j / 1000))(j + 1);
}
