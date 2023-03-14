#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _str_words(char *s, int w, int in_word);

/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return:	fail - NULL if malloc fails OR
 *		success - pointer to new 2D array
 */
char **strtow(char *str)
{
	int i, j, len = 0, num_of_words = _str_words(str, 0, 0);

	char *p;
	char **words = malloc(num_of_words * sizeof(char *) + 1);

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_of_words; i++)
	{
		j = len = 0;

		while (*str == ' ')
		{
			str++;
		}

		p = str;

		while (*str != ' ')
		{
			len++;
			str++;
		}


		*(words + i) = malloc(len * sizeof(char) + 1);

		if (*(words + i) == NULL)
		{
			i--;
			while (i)
			{
				free(*(words + i));
				i--;
			}
			free(words);
			return (NULL);
		}

		while (j < len)
		{
			*(*(words + i) + j) = *(p + j);
			j++;
		}

		*(*(words + i) + j) = '\0';
	}

	*(words + i) = NULL;

	return (words);
}

/**
 * _str_words - number of space separated words in sentence
 * @s: string to count words of
 * @w: number of current found words
 * @in_word: whether inside a word or not
 *
 * Return: number of words in string
 */
int _str_words(char *s, int w, int in_word)
{
	if (s == NULL || *s == '\0')
	{
		return (w);
	}

	if (*s == ' ')
	{
		return (_str_words(s + 1, w, 0));
	}
	else
	{
		if (in_word == 0)
		{
			return (_str_words(s + 1, w + 1, 1));
		}
		else
		{
			return (_str_words(s + 1, w, 1));
		}
	}
}
