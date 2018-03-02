#include <stdio.h>
void main()
{
	int a = 5, b = -7, c = 0, d;
	d = ++a && ++b || ++c;
	printf("%d  %d %d %d \n",a, b, c, d);
	a = 5, b = -7, c = 0, d = 0;
	d = a++ && b++ || c++;
	printf("%d  %d %d %d \n",a, b, c, d);
}
