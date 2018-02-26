#include <stdio.h>

struct k{
	int a:8;
	int b:8;
	int c:8;
};

union l{
	int x;
	struct k a;

};

int main()
{
	union l p;
	p.x = 8; 
	printf("%d %d %d", p.a.a, p.a.b, p.a.c);
	return 0;
}
