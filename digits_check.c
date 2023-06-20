#include "monty.h"

/**
 * digits_check - Checks if a string consists of only digits.
 *
 * @str: Pointer to the string to be checked.
 *
 * Return: true if the string consists of only digits, false otherwise.
 */

bool digits_check(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (str[0] == '-')
			continue;
		if (isdigit(*str) == 0)
			return (false);
	}
	return (true);
}
