#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char **argv) 
{ 
	if (argc != 3) 
	{ 
		puts("Enter 2 numbers to multiply on the command line"); 
		return -1; 
	} 
	printf("%s times %s = %d\n", argv[1], argv[2], atoi(argv[1]) * atoi(argv[2])); 
	return 0; 
} 
