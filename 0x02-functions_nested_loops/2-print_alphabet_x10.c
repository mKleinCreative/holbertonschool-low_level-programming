/**
 * main - Entry point
 *
 * Return: (Success)
 */

void print_alphabet_x10(void)
{
	int ch;
	int count;

	count = 0;
	while(count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		count++;
		_putchar(count);
		_putchar('\n');
	}
}
