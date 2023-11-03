/*
 * program should print the result of the multiplication, followed by a new line
 * the two numbers and result of the multiplication can be stored in an integer
 * If the program does not receive two arguments, your program should print Error
 * return 1
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
