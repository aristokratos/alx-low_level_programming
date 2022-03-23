#include "main.h"

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

int compare(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] == '\0')
			return (0);
		if (haystack[i] != needle[i])
			return (0);
	}
	return (1);
}

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring
 * Description: finds first instance of needle in haystack
 * Return: pointer to first instance, NULL if not in haystack
 **/

char *_strstr(char *haystack, char *needle)
{
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j])
		{
			if (compare(&haystack[j], needle) == 1)
				return (&haystack[j]);
		}
	}
	return (NULL);
}
