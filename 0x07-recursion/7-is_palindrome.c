
/**
 * pal_checker - helper function to check if palindrome
 * @str
 * @start: beginning of str array
 *
 * Return: (Success)
 */

int pal_checker(char str[], int start, int end)
{
	if (start == end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start <= end)
		return pal_checker(str, start + 1, end - 1);
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

	while(s[length] != '\0')
		length = length + 1;
	if (length == 0)
		return (1);
	return (pal_checker(s, 0, length - 1));
}

