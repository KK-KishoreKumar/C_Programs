#include <stdio.h>

struct test2
{
   unsigned int x: 5;
   unsigned char: 0;
   unsigned char a: 2;
   unsigned int y: 8;
};
 
int main()
{
   printf("Size of test2 is %d bytes\n", sizeof(struct test2));
   return 0;
}
