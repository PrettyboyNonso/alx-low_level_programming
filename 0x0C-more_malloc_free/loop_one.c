#include <stdio.h>
#include <stdlib.h>
char *check_if(char *ptr, int count_one, int count_two, int n, char *s1, char *s2)
{
	int l, m;

	ptr = malloc(sizeof(char) * (count_one + count_two + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (int l = 0; l < (count_one + count_one); l++)
	{

	if (l == (count_one))
	{
	for (int m = 0; m < count_two; m++)
	{
	ptr[l] = s2[m];
	l++;
	}
	}
	ptr[l] = s1[l];
	}
	ptr[count_one + count_two] = '\0';
	return (ptr);
}
