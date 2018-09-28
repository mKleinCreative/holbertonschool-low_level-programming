/**
 * string_toupper - transforms a string to uppercase
 * @*: char to uppercase
 * Return: (Success)
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
			ch[i] = ch[i] - 32;
	}
	return (ch);
}
