#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: param
 * @height: param
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int **row_pointer;
	int i;
	int j;

	if (width <= 0)
	{
	return (NULL);
	}

	if (height <= 0)
	{
	return (NULL);
	}
	row_pointer = (int **)malloc(height * sizeof(int *));
	if (row_pointer != NULL)
	{
	for (i = 0; i < height; i++)
        {
        row_pointer[i] = (int *)malloc(width * sizeof(int));
        for (j = 0; j < width; j++)
        {
                row_pointer[i][j] = 0;
        }
        }
        return (row_pointer);
	}
	else
	{
	free(row_pointer);
	return (NULL);
	}
}
