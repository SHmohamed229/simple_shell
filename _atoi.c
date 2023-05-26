#include "shell.h"

/**
  * interactive - this code for Returns true if shell is interactive mode
  * @info: this method Struct Address
  *
  * Return: if interactive mode 1 , otherwise 0
*/
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - for code check if char is a delimeter
 * @c: character to check
 * @delim: this function for  the delimeter string
 * Return: if true 1 , if false 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}


/**
 * _isalpha - check this code for alphabetic char
 * @c: char to input
 * Return: if c is alphabetic 1 ,  otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - this code for  converts a str to an init
 * @s: str to be converted
 * Return: if no numbers in string 0 , converted num otherwise
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
