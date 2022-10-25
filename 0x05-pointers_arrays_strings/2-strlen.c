#include "main.h"
/**
 * _strien-Finds the lenght of a string
 * @s:String pointer to the string whose lenght is to be found
 * Return:returns the lenght of the string
 */

int_strlen(char *s)
{
	int p = 0;
	/ incremeant up to when the last character is NULL, \ 0 /
		while (*(s + p) != 0)
		{
			p++;
		}
	return (p);
}
