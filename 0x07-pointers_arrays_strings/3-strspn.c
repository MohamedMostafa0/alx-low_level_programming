#include "main.hi"

/**
 * _strspn - func
 * @s: a - Variable
 * @accept: b - variable
 * Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
	char a[265] = {0}
	int i;
	unsigned int res = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] >= 'a' && accept[i] <= 'z')
		{
			a[accept[i] - 'a'] += 1;
		}
		else if (accept[i] >= 'A' && accept[i] <= 'Z')
		{
			a[accept[i] - 'A' + 26] += 1;
		}
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		int flag = -1;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			flag = s[i] - 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			flag = s[i] - 'A' + 26;
		}
		if (flag > -1 && a[flag] > 0)
		{
			res++;
		}
		else
			break;
	}
	return (res);
}

