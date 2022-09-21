#include "main.h"
#include <string.h>

/**
 **_strcat - concatenate two strings
 *@*dest: first string received
 *@*src: second string received
 * Return: 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	char *dest[98] = "hello", *src[] = "world";
	
	int length, j;
	
	length = 0
	while (*dest[length] != '\0') 
	{
	++length;
	}

	for (j = 0; *src[j] != '\0'; ++j, ++length)
	{
	*dest[length] = *src[j];
	}
	*dest[length] = '\0';

	printf("After concatenation: ");
	puts(*dest);

	return (0);
}
