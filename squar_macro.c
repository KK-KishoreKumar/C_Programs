#include <stdio.h>
#define SQUARE(X) ((X)*(X))
int main()
{
	int i = 5;
	printf("%d:",SQUARE(++i));
	return 0;
}
