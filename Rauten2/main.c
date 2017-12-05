#include<stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	int breiteN = 51;
	char zeichenLeerstellen = '+';
	char zeichenRaute = '0';


	if (breiteN % 2 == 0) 
		return;

	for (i = 0; i < breiteN/2; i++)
	{
		for (j = 0; j < breiteN/2 - i; j++)
		{
			printf("%c", zeichenLeerstellen);
		}

		if (i == 0)
		{
			printf("%c", zeichenRaute);
		}
		else
		{
			for (a = 0; a < 3; a++)
			{
				printf("%c", zeichenRaute);
				if (a < 2)
				{
					for (b = breiteN - i; b < breiteN - 1; b++)
					{
						printf("%c", zeichenLeerstellen);
					}
				}
			}
		}

		for (j = 0; j < breiteN / 2 - i; j++)
		{
			printf("%c", zeichenLeerstellen);
		}

		printf("\n");
	}
	for (i = 0; i < breiteN; i++)
	{
		printf("%c", zeichenRaute);		
	}
	printf("\n");


	for (i = breiteN / 2 - 1; i >= 0; i--)
	{
		for (j = 0; j < breiteN / 2 - i; j++)
		{
			printf("%c", zeichenLeerstellen);
		}

		if (i == 0)
		{
			printf("%c", zeichenRaute);
		}
		else
		{
			for (a = 0; a < 3; a++)
			{
				printf("%c", zeichenRaute);
				if (a < 2)
				{
					for (b = breiteN - i; b < breiteN - 1; b++)
					{
						printf("%c", zeichenLeerstellen);
					}
				}
			}
		}

		for (j = 0; j < breiteN / 2 - i; j++)
		{
			printf("%c", zeichenLeerstellen);
		}

		printf("\n");
	}

	getchar();
}