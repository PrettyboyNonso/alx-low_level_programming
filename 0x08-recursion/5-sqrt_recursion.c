#include "main.h"
int find_sqrt(int n, int start, int end);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0, n));
}

int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		int square = mid * mid;
		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (find_sqrt(n, mid + 1, end));
		}
		else
		{
			return (find_sqrt(n, start, mid - 1));
		}
	}
	return (end);
}
