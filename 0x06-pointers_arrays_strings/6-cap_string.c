#include "main.h"

/**
 * cap_string - take strings and capitalize words
 * @s: string to capitalize
 * Return: capitalized words
 */
char *cap_string(char *s)
{
	int alphabet = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + alphabet) >= 97 && *(s + alphabet) <= 122)
		*(s + alphabet) = *(s + alphabet) - 32;
	alphabet++;
	while (*(s + alphabet) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + alphabet) == sep_words[i])
			{
				if ((*(s + (alphabet + 1)) >= 97) && (*(s + (alphabet + 1)) <= 122))
					*(s + (alphabet + 1)) = *(s + (alphabet + 1)) - 32;
				break;
			}
		}
		alphabet++;
	}
	return (s);
}
