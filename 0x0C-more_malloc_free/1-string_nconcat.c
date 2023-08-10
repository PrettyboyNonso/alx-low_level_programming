#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int itteration_one = 0;
	int itteration_two = 0;
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (int i = 0; s1[i] != '\0'; i++)
	{
	itteration_one += 1;
	}

	for (int j = 0; s2[j] != '\0'; j++)
	{
	itteration_two += 1;
	}
	if (n >= itteration_two)
	{
	new_string = malloc(sizeof(char) * (itteration_one + itteration_two + 1));
	if (new_string == NULL)
	{
	return NULL;
	}
	for (int l = 0; l < (itteration_one + itteration_two); l++)
	{
	if (l == (itteration_one))
	{
	for (int m = 0; m < itteration_two; m++)
	{
	new_string[l] = s2[m];
	l++;
	}
	}
	new_string[l] = s1[l];
	}
	new_string[itteration_one + itteration_two] = '\0';
	}
	else
	{
	new_string = malloc(sizeof(char) * ((itteration_one + n) + 1));
	if (new_string == NULL)
	{
	return NULL;
	}
	for (int k = 0; k < (itteration_one + n); k++)
	{
	if (k == (itteration_one))
	{
	for (int j = 0; j < n; j++)
	{
	new_string[k] = s2[j];
	k++;
	}
	}
	new_string[k] = s1[k];
	}
	new_string[itteration_one + n] = '\0';
	}
	return new_string;
}
