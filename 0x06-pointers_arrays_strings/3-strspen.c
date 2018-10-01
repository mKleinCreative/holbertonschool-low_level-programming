/**
 * _strspn - searches string for a set of bytes
 * @s: segment to get bytes of for unique instances.
 * @accept: valid segment indicator.
 * Return: number of unique instances
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!s[j])
			break;
	}
	return (i);
}
