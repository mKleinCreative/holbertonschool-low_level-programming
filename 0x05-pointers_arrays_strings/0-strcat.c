/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to add on to dest
 * Return: new string provided
 */
char *_strcat(char *dest, char *src)
{
	int destLength, i, srcLength;

	destLength = 0;
	srcLength = 0;
	while (*dest++)
		destLength++;
	while (*src++)
		srcLength++;
	for (i = destLength; i < (destLength + srcLength); i++)
		dest[destLength] = src[srcLength - destLength];
	dest[destLength + 1] = '\0';
	return (dest);
}

