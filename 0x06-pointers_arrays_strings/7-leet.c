/**
 * leet - Encode a string into 1337.
 * @s: The string to encode.
 *
 * Return: A copy of the encoded string.
 */


char *leet(char *s)

{
	char alphaNum[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; alphaNum[j] != '\0'; j++)

		{
			if (s[i] == alphaNum[j])
			{
				s[i] = alphaNum[j + 1];
				break;
			}
		}
	}
	return (s);
}
