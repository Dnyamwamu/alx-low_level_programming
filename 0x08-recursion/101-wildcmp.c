#include <stdio.h>

int wildcmp_recursive(char *s1, char *s2);

/**
 * match - Check if two strings match using wildcards.
 * @s1: The first string to compare.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp_recursive(s1, s2));
	}
	return (0);
}

/**
 * wildcmp_recursive - Recursively compare two strings with wildcards.
 * @s1: The first string to compare.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (match(s1, s2 + 1) || (*s1 != '\0' && wildcmp_recursive(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	}
	return (0);
}

/**
 * wildcmp - Compare two strings with wildcards.
 * @s1: The first string to compare.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (match(s1, s2));
}
