#include <stdio.h>
#include "holberton.h"

/**
* *cap_string - capitalizes the first letter of
* words
* @s: string
* Return: string capitalized
*/
char *cap_string(char *s)
{
	int j;
	int changue = 0;

	for (j = 0; s[j] != 0; j++)
	{
	if ((s[j] == ' ') || (s[j] == '\t') ||
		(s[j] == '\n') || (s[j] == ',') ||
		(s[j] == ';') || (s[j] == '.') ||
		(s[j] == '!') || (s[j] == '?') ||
		(s[j] == '"') || (s[j] == '(') ||
		(s[j] == ')')  || (s[j] == '{') ||
		(s[j] == '}'))
		changue = 0;
	else
		changue = changue + 1;
	if (changue == 1 && (s[j] >= 'a' && s[j] <= 'z'))
		s[j] = s[j] - 32;
	}
	return (s);
}
