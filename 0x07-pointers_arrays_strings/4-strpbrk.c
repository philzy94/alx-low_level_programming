/**
  * *_strpbrk - searches a string for any set of bytes
  * @s: string to be searched
  * @accept: bytes to be searched for
  *
  * Return: pointer to s that matches one of the bytes and Null if none
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);

			}
		}
	}
	return (p);
}


