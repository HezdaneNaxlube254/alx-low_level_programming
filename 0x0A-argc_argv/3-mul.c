/*
 * program should print the result of the multiplication, followed by a new line
 * the two numbers and result of the multiplication can be stored in an integer
 * If the program does not receive two arguments, your program should print Error
 * return 1
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int multy;
        if (argc != 2)
        {
		printf("Error\n");
                return 1;
	}
        multy=atoi(argv[1])*atoi(argv[2]);
		printf("%d\n",multy);
		return 0;
}
