#include "main.h"
/**
 * _strcpy - copies the string from s2 to s1
 * @s1: First string
 * @s2: Second string
 * Return: return the value
 */
char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: return a value
 */
int _strcmp(char *s1, char *s2)
{
	int i, sus;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		sus = s1[i] - s2[i];
		if (sus > 0 || sus < 0)
		{
			break;
		}
	}
	return (sus);
}
/**
 * my_strcat - function that concatenates two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: return array
 */
char *my_strcat(char *s1, const char *s2)
{
	char *s3 = s1;

	while (*s3 != '\0')
	{
		s3++;
	}
	while (*s2 != '\0')
	{
		*s3 = *s2;
		s3++;
		s2++;
	}
	*s3 = '\0';
	return (s1);
}
/**
 * str_concat - function that concatenate argument with his path
 * @s1: first string(path)
 * @s2: second string(argument)
 * Return: return concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *conct;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	conct = (char *)malloc(len1 + len2 + 2);
	if (conct == NULL)
		return (NULL);

	if (s1 != NULL)
		conct = _strcpy(conct, s1);

	if (len1 > 0 && len2 > 0)
		conct = my_strcat(conct, "/");

	if (s2 != NULL)
		conct = my_strcat(conct, s2);
	return (conct);
}
/**
 * _strchr - It is used to find
 * the first occurrence of a substring
 * @str: string
 * @character: stops if it encouter that char
 * Return: return string
*/
char *_strchr(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == character)
		{
			return ((char *)str);
		}
		str++;
	}
	if (character == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
