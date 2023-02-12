

unsigned int _strspn(char *s, char *accept)

{

int countb;
int i;
int j;


	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				i++;
				countb++;
				break;
			}
		}

		if (accept[j] == '\0')

		{
			return (countb);
		}
	}
	return (countb);
}
