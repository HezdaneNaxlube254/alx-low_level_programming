/*
 *  a program that prints all arguments it receives.
*All arguments should be printed, including the first one
*Only print one argument per line, ending with a new line
*/
#include<stdio.h>
int main(int argc, char *argv[])
{
	int count=0;

	for (; count< argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}

