#include <stdio.h>
#include <stdlib.h>

/**
  * *str_concat - concatenates two strings.
  * @s1: One of the strings
  * @s2: The second string
  *
  * Return: Pointer to newly allocated memory containing contents of joined
  * string and NULL if unsuccesful
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, j, i, size;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	len2++;

	size = len1 + len2;

	new_str = malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; i <= size; i++, j++)
		new_str[i] = s2[j];

	return (new_str);
}
