#include "main.h"
/**
 * _getenv - Get the value of an variable
 * @name: Name of the environment
 * Return: Value of the environment variable, or NULL
 */
char *_getenv(char *name)
{
	char **env;
	size_t name_len = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (&(*env)[name_len + 1]);
		}
	}

	return (NULL);
}

