#include <stdio.h>
int main()
{
	int a = 10;
	printf("Address = %p \n",a);
	void *p = &a;
	void *k = &a;
	printf("%p\n",p + 1);
	return 0;

}
