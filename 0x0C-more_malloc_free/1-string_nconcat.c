#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function allocate memorey = sizeof(s1 + n) bytes to
 * concatenate s1 and s2 in it
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated with s1
 *
 * Return: pointer to the new conatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, cnt = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (j > n)
		j = n;

	ptr = malloc(((i + j) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (cnt = 0; cnt < i; cnt++)
		ptr[cnt] = s1[cnt];
	for (i = 0; i < j; i++)
	{
		ptr[cnt] = s2[i];
		cnt ++;
	}
	ptr[cnt] = '\0'; 
	return (ptr);
}
