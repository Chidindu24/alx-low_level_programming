#include "main.h"
/**
 * _sqrt__recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1
 * else return natural square root
 */
int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}
/**
 * sqrt_fun - helper function to solve _sqrt_reursion
 * @sq: number to determine if square root
 * @n: int number
 * Return: square roo if natural square, or -1 if non found
 */
int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
