/**
 * rot13 - encodes a string using rot13
 * @ch: string to encode
 * Return: encoded string.
 */

char *rot13(char *ch)
{
	char *alphabet, *rot13;
	int i, j;

	alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (ch[i] == alphabet[j])
			{
				ch[i] = rot13[j];
				break;
			}
		}
	}
	return (ch);
}
