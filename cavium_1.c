#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE (1 << 31)

int main()
{
	char *p = malloc(SIZE);
	memset(p, 0, SIZE);
	return 0;
}
