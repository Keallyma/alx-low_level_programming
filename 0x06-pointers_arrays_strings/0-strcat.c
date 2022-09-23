#include "main.h"
#include <string.h>

/**
 *_strcat - concatenate two strings
 *@dest: first string received
 *@src: second string received
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int length, j;
	
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = *src[j];
	}
	dest[length] = '\0';
	return (dest);
}
