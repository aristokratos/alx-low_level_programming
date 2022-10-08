#include <stdio.h>
#include <stdlib.h>

/**
 * numchecker - verifies if string has only numbers
 * @s: string to check
 * Description: return 1 if only numbers in string, 0 if not
 * Return: 1 if only numbers, 0 if not
 **/

int numchecker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - find least amount of coins needed for change
 * @argc: number of parameters entered
 * @argv: strings entered including file name
 * Description: prints the minimum number of coins to make change
 * Return: zero
 **/

int main(int argc, char *argv[])
{
	int change, coins;
	char *input = argv[1];

	change = coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(input);

	if (change >= 0 && numchecker(input) == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0 && numchecker(&input[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0)
	{
		change = 0;
	}
	coins = change / 25;
	change = change % 25;
	coins = coins + change / 10;
	change = change % 10;
	coins = coins + change / 5;
	change = change % 5;
	coins = coins + change / 2;
	change = change % 2;
	coins += change;
	printf("%d\n", coins);
	return (0);
}
