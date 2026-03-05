#include <stdio.h>

int main(void)
{
	int c = 0;
	int a = 0;
	int b = 0;

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
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", (a + b));
		}

		if (c == 0)
			printf("Goodbye !\n");

	} while (c != 0);

	return (0);
}
