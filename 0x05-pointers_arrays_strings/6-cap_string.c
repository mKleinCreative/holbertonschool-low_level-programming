/**
 * is_separator - checks to see if character is a separator of words
 * @ch: character to check
 * Return: 0 if false, 1 if true
 */

int is_separator(char ch)
{
	if (ch == ' ' || ch == ',' || ch == ';')
		return (1);
	else if (ch == '.' || ch == '!' || ch == '?')
		return (1);
	else if (ch == '\t' || ch == '\n')
		return (1);
	else if (ch == '"' || ch == '(' || ch == ')' || ch == '{' || ch == '}')
		return (1);
	return (0);
}


/**
 * cap_string - capitalizes all words of a string.
 * @str: string sentence to run command over
 * Return: modified string with capital letters
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		if (is_separator(str[i - 1]))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}
	return (str);
}

