#include "main.h"
/**
 * leet - encode a string into 1337
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @s: pointer to string
 *
 * Return: pointer to s 
 */

char *lest(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	StringCount = 0
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leeCount++;
		}
		stringCount++;
	}
	return (s);
}
