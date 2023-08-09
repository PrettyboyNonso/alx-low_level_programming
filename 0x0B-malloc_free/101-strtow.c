#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c);
int count_words(char *str);
char **strtow(char *str);

int is_space(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str)
{
    int word_count;
    int in_word;
    int i;

    word_count = 0;
    in_word = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!is_space(str[i]))
        {
            if (!in_word)
            {
                word_count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return word_count;
}

char **strtow(char *str)
{
    int num_words;
    char **words;
    int word_index;
    int word_start;
    int i;
    int word_length;
    int l;
    int k;

    if (str == NULL || str[0] == '\0')
    {
        return NULL;
    }

    num_words = count_words(str);

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
    {
        return NULL;
    }

    word_index = 0;
    word_start = -1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!is_space(str[i]))
        {
            if (word_start == -1)
            {
                word_start = i;
            }
        }
        else
        {
            if (word_start != -1)
            {
                word_length = i - word_start;
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL)
                {
                    for (k = 0; k < word_index; k++)
                    {
                        free(words[k]);
                    }
                    free(words);
                    return NULL;
                }

                strncpy(words[word_index], str + word_start, word_length);
                words[word_index][word_length] = '\0';

                word_index++;
                word_start = -1;
            }
        }
    }

    if (word_start != -1)
    {
        word_length = strlen(str) - word_start;
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL)
        {
            for (l = 0; l < word_index; l++)
            {
                free(words[l]);
            }
            free(words);
            return NULL;
        }

        strncpy(words[word_index], str + word_start, word_length);
        words[word_index][word_length] = '\0';

        word_index++;
    }

    words[word_index] = NULL;

    return words;
}