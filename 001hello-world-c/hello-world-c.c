/* Printing Hello World! in C, this file will print Hello World! on one line and Welcome to C programming. on another new line. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* These four lines above incluse the standard input and output library so we could use the command */

int main()
{


	char s[100];
	scanf("%[^\n]%*c", &s);
	printf("Hello, World!\n");
	printf("Welcome to C programming.\n");
	return 0;
}
