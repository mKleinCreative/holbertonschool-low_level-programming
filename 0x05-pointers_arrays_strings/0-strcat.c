/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to add on to dest
 * Return: new string provided
 */
char *_strcat(char *dest, char *src)
{
	int destLength, i, j, srcLength;

	destLength = 0;
	srcLength = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		destLength++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		srcLength++;
		i++;
	}
	for (i = destLength; i < (destLength + srcLength) && src[i] != '\0'; i++)
		dest[destLength + i] = src[i];
	dest[destLength + 1] = '\0';
	return (dest);
}

