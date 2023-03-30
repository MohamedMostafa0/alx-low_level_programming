#include "main.h"
#include <string.h>

/**
 * cap_string - func
 * @a: a - Variable
 * Return: return
 */
char *cap_string(char *a)
{
	int i = 0, j;
	short n = 0;
	char *s = ",;.!?\"(){}\t\n ";

	while (a[i] != '\0')
	{
		if (n == 1)
		{
			if (a[i] >= 97 && a[i] <= 97 + 25)
			{
				a[i] -= 97 - 65;
				n = 0;
				continue;
			}
			else
			{
				n = 0;
				continue;
			}
		}
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == a)
			{
				n = 1;
				continue;
			}
		}
		i++;
	}
	return (a);
}

