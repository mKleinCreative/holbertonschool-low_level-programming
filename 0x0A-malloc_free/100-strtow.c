#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * strtow - splits a string into separate words
 * @str: string to split.
 * Return: null if string is empty or fail, otherwise pointer to new arr
 */

char **strtow(char *str)
{
	int index, word_find, curr_word, letter_count, word_count, letter;
	char **words;

	if (!str)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		if (str[index] != ' ' && (str[index + 1] == ' ' || str[index + 1] == '\0'))
		{
			word_count++;
		}
	}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	curr_word = 0;
	for (word_find = 0; str[word_find]; word_find++)
	{
		letter_count = 0;
		if (str[word_find] != ' ')
		{
			for (index = word_find; str[index] != '\0'; index++)
			{
				if (str[index] == ' ')
					break;
				letter_count++;
			}
			words[curr_word] = malloc(sizeof(char) * (letter_count + 1));
			if (!words[curr_word])
			{
				for (; curr_word >= 0; curr_word--)
					free(words[curr_word]);
				free(words);
			}
			for (letter = 0; word_find < index; word_find++)
				words[curr_word][letter++] = str[word_find];
			curr_word++;
		}
	}
	words[curr_word] = NULL;
	return (words);
}
