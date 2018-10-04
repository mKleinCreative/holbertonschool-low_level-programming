#include <stdio.h>
/**
 * _strlen_recursion - returns the length of the string
 * @s: string to find the length of.
 * Return: (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - helper function to check if palindrome
 * @str: string to check
 * @start: beginning of str array
 * @end: end of the str array
 * Return: (Success)
 */

int pal_checker(char str[], int start, int end)
{
	/* printf("start %d end %d \n", start, end);*/
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start <= end || start < end + 1)
		return (pal_checker(str, start + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - Entry point
 * @s: string to check if a palindrome or not.
 * Return: 1 if a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length == 0)
		return (1);
	return (pal_checker(s, 0, length - 1));
}

