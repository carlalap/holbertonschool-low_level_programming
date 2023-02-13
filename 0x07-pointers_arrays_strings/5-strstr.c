#include "main.h"

/**
 * *_strstr - locates and points to substr if existing
 * @haystack: string to look thru
 * @needle: substring to locate
 * Return: point to substr or NULL if none found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, hitCount, nedLen;

	if (!needle[0])
	{
		return (haystack);
	}
	while (needle[i])
	{
		i++;
	}
	nedLen = i;
	i = 0;
	while (haystack[j])
	{
		hitCount = 0;
		if (haystack[j + nedLen - 1] == '\0')
		{
			return (NULL);
		}
		if (haystack[j] == needle[0])
		{
			for (i = 0; i < nedLen; i++)
			{
				if (haystack[j + i] == needle[i])
				{
					hitCount++;
					if (hitCount == nedLen)
					{
						haystack += j;
						return (haystack);
					}
				}
			}
		}
		j++;
	}
	return (NULL);
}
