/**
 * _strstr - locates a substring in given string
 * @haystack: memory area pointed to.
 * @needle: constant byte to fill memory with.
 * Return: pointer to beginning of located substring
 *		or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *needle)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}

