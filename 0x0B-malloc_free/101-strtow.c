#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
int get_word_length(char *str);
char **allocate_words(char *str, int words);
void free_words(char **words);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         NULL if str == NULL or str == "".
 *         NULL if the function fails.
 */
char **strtow(char *str)
{
    char **words;
    int words_count, i, j, k, len;

    if (str == NULL || *str == '\0')
        return (NULL);

    words_count = count_words(str);
    if (words_count == 0)
        return (NULL);

    words = allocate_words(str, words_count);
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; i < words_count; ++i)
    {
        while (str[j] == ' ')
            ++j;

        len = get_word_length(str + j);
        words[i] = malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            free_words(words);
            return (NULL);
        }

        for (k = 0; k < len; ++k, ++j)
            words[i][k] = str[j];

        words[i][k] = '\0';
    }

    words[i] = NULL;
    return (words);
}

/**
 * count_words - Counts the words in a string.
 * @str: The string to count the words from.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str == ' ')
            ++str;

        if (*str != '\0')
            ++count;

        while (*str != ' ' && *str != '\0')
            ++str;
    }

    return (count);
}

/**
 * get_word_length - Gets the length of a word.
 * @str: The string to get the word length from.
 *
 * Return: The length of the word.
 */
int get_word_length(char *str)
{
    int length = 0;

    while (str[length] != ' ' && str[length] != '\0')
        ++length;

    return (length);
}

/**
 * allocate_words - Allocates memory for the words array.
 * @str: The string to split.
 * @words: The number of words in the string.
 *
 * Return: A pointer to the words array.
 *         NULL if the allocation fails.
 */
char **allocate_words(char *str, int words)
{
    char **array;

    array = malloc(sizeof(char *) * (words + 1));
    if (array == NULL)
        return (NULL);

    return (array);
}

/**
 * free_words - Frees the words array.
 * @words: The words array to free.
 */
void free_words(char **words)
{
    int i;

    for (i = 0; words[i] != NULL; ++i)
        free(words[i]);

    free(words);

