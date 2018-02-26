#include <stdio.h>
#define so(a) (char*)a-(char*)++a
int main()
{

	int *p = NULL;
	//printf("%d:",(char*)p - (char*)++p );
	printf("%d:",so(p));
}
