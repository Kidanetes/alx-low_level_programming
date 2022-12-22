#include "main.h"
/** cap_string - capitalize every word of
 * a string
 * @s: input parameter
 * Return: string
 */
char *cap_string(char *)
{
	int i = 0, j, status;
	char str[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',')', '{', '}', '\0'};

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			status = 0;
			j = 0;
			while (str[j] != '\0' && i != 0)
			{
				if (s[i - 1] == str[j])
				{
					status = 1;
					j++;
					break;
				}
				j++;
			}
			if (status == 1 || i == 0)
				s[i] = s[i] + ('A' - 'a');
		}
		i++;
	}
	return (s);
}



		
			
