#include <stdio.h>

int main(void)
{
	int c = 0;
	int ai = 0;
	int bi = 0;
	float af = 0;
	float bf = 0;

	printf("~~Simple Calculator~~\n");
	printf("[1] - Add\n");
	printf("[2] - Substract\n");
	printf("[3] - Multiply\n");
	printf("[4] - Divide\n");
	printf("[0] - Quit\n");

	do
	{
		printf("Choice: ");
		scanf("%d", &c);

		if (c < 0 || c > 4)
		{
			printf("Invalid choice\n");
		}

		if (c == 1)
		{
			printf("A: ");
			scanf("%d", &ai);
			printf("B: ");
			scanf("%d", &bi);
			printf("Result: %d\n", (ai + bi));
		}

		if (c == 2)
		{
			printf("A: ");
			scanf("%d", &ai);
			printf("B: ");
			scanf("%d", &bi);
			printf("Result: %d\n", (ai - bi));
		}

		if (c == 3)
		{
			printf("A: ");
			scanf("%d", &ai);
			printf("B: ");
			scanf("%d", &bi);
			printf("Result: %d\n", (ai * bi));
		}

		if (c == 4)
		{
			printf("A: ");
			scanf("%f", &af);
			printf("B: ");
			scanf("%f", &bf);
			if (bf == 0)
			{
			printf("Error: division by zero\n");
			}
			else
			{
			printf("Result: %.1f\n", (af / bf));
			}
		}

		if (c == 0)
			printf("Goodbye !\n");

	} while (c != 0);

	return (0);
}
