#include <stdio.h>
#include <stdlib.h>
/**
 * main - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
