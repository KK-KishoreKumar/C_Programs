#include <stdio.h>
#include <string.h>

void rev(char*);

int main(void)
{
	char a[] = "kishore";
	rev(a);
	printf("%s",a);
	return 0;

}

void rev(char *b)
{
	int i, j;
	for (i = 0, j = strlen(len) - 1; i < j; i++, j--) {

		printf("%d %d ",i,j);

		*(p + i) ^= *(p + j);
		*(p + j) ^= *(p + i);
		*(p + i) ^= *(p + j);
	
	}


}

