#include <stdio.h>

union a{
	int a;
	char arr[4];
	int b;
};

int main()
{
	union a p;
;
	char arr[] = {'k','i','s','h','\0'};
	p.a = 0;
	p.arr[1] = 'g';
	printf("%s",p.arr);
	printf("\n arr[] = %p  &arr[0] = %p  &arr[1] = %p &arr[2] = %p &arr[3] = %p &arr[4] = %p\n", arr, &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	return 0;

}

