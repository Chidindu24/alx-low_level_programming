#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}
	if (*p == '\0')
		return (haystack);
	}
	return (0);
}
