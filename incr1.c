#include <stdio.h>

int main()
{
    int i = 1, j = 1, k = 1;

    printf("%d \n",++i || ++j && ++k);
    printf("%d %d %d \n", i, j, k);

    return 0;
}
