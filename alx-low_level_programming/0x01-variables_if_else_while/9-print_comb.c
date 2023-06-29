#include <stdio.h>
/*
	Write a program that prints all possible com
	binations of single-digit numbers.

	Numbers must be separated by ,, followed by 
	a space
	Numbers should be printed in ascending order
	You can only use the putchar function (every
       	other function (printf, puts, etc…) is forbi
	dden)
	All your code should be in the main function
	You can only use putchar four times maximum 
	in your code
	You are not allowed to use any variable of t
	ype char

*/

int main(void)

{							int num;						for (num = 0; num <= 9; num++)
	{							putchar((num % 10) + '0');
		if (num == 9)

		{
			continue;
		}

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
