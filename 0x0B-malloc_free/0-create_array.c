/*a function that creates an array of chars, and initializes it with a specific char.
*Prototype: char *create_array(unsigned int size, char c);
*Returns NULL if size = 0
*Returns a pointer to the array, or NULL if it fails
*/
#include<stdlib.h>
#include"main.h"
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
