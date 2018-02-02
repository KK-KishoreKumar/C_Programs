include <stdio.h>
int main(int argc , char* argv[])
{

	char c, t;
	while ((c = getchar()) != EOF) {

		if (c != ' ') {
			putchar(c);
			
			
		} else {
			if (c != (t = getchar())) {
				putchar(c);
				putchar(t);
				
			}
		}
	}
	return 0;

}
