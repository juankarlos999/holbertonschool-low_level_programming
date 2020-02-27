#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number for root
 * Return: result of root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	else
		return (find_root(n, 0));
}
/**
 * find_root - function that find for the root of a number
 * @radical : number radical
 * @test_num: number for test
 * Return: root
 */
int find_root(int radical, int test_num)
{
	if (test_num * test_num == radical)
		return (test_num);
	else if (test_num * test_num > radical)
		return (-1);
	else
		return (find_root(radical, (test_num + 1)));
}
