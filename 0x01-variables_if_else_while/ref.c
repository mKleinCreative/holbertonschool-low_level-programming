#include <stdio.h>

int main(void) 
{
	int n1, n2, n3;

	n1 = 0;
	n2 = 1;

	for (n3 = 2; n2 <= 8 && n1 <= 7 && n3 <= 9; n3++)
	{
		putchar(n1 + '0');	
		putchar(n2 + '0');
		putchar(n3 + '0');

		if (n1 != 7)
		{
			putchar(',');
			putchar(' ');
		}
		if (n3 == 9 && n1 != 7)
		{
			n2++;
			n3 = n2;

			if (n2 == 9)
			{
				n1++;
				n2 =  n1 + 1;
				n3 = n2;
			}
		}
		
	}
	putchar('\n');
	return (0);
}
