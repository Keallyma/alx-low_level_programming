#include "main.h"

/**
 *_strncat - concatenate two strings
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of bytes to be concatenated
 *
 *Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (des[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
