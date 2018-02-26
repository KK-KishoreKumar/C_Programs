#include <stdio.h>


int main()
{
union name {

	char x;
	int a;
	char b;
};

union name a={4, 2};

printf("%d  %d  %d", a.x, a.a, a.b);
}
