#include "main.h"
/** cap_string - capitalize every word of
 * a string
 * @s: input parameter
 * Return: string
 */
char *cap_string(char *)
{
	int i = 0, status;
	char* str = {' ', '	', '\n', ',', ';', '.', '!', '?', '\"', '(',')', '{', '}', '\0'};

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			status = 0;
			while (*str != '\0' && i != 0)
			{
				if (s[i - 1] == *str)
				{
					status = 1;
					*str++;
					break;
				}
				*str++;
			}
			if (status == 1 || i == 0)
				s[i] = s[i] + ('A' - 'a');
		}
		i++;
	}
	return (s);
}



		
			
