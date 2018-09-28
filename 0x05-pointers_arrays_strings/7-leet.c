/**
 * leet - translates a string to lee7 speak
 * @ch: string to translate
 * Return: (Success)
 */

char *leet(char *ch)
{
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *number = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (ch[i] == lower[j] || ch[i] == upper[j])
			s[i] = number[j];
			break;
		}
	}
	return (0);
}

