#include <stdio.h>

/*hi*/

/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
/*abc
*/
>>>>>>> a98d8bf5b47a6fab041abe575c02c467a324b5a4
#define MAXv 10
#define MAXh 20

int main(int argc, char* argv[])
{

	int arr[MAXh] = {0};
	int i, j;
	int count = 0;
	int c;

	while ((c = getchar()) != EOF) {

		if (c != ' ') {

			count++;
		} else {
			++arr[count];
			count = 0;
		}

	}	
	
		for(i = 0; i < 20; i++)
			printf(" %d", arr[i]);

		printf("\n");

	for (i = MAXv; i >= 1; i--) {
	
		printf(" %3d | ",i);
		for (j = 1; j <= MAXh; j++) {
		
			if (i == arr[j]) {
				printf("*");
				printf("  ");
			} else {
				printf("  ");
			}
		}
		printf("\n");

	}

	printf("\n");


	printf("\n");

	printf("       ");
	printf(".................................................\n");
	printf("       ");
	for (i = 1; i <= MAXh; i++) {

		printf("%d", i);
		printf("  ");
	}
	printf("\n");
	return 0;
}
