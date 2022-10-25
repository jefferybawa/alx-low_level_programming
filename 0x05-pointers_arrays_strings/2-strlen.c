#include "main.h"
/**
 * _strien-Finds the lenght of a string
 * @s:String pointer to the string whose lenght is to be found
 * Return:returns the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

		while (*s != '\0')
		{
			len++;
			s++;
		}

	return (len);
}
