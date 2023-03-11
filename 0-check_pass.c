#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int check_passwd(char *passwd)
{
	int i;

	if (strlen(passwd) != 4)
	{
		printf("Invalid password\n");
		return(1);
	}
	
	for (i = 0; passwd[i] != '\0'; i++)
	{
		if (!isdigit(passwd[i]))
		{
			printf("All values in your password should be numbers\n");
			return(1);
		}
	}
	printf("Password Accepted\n");
	return (0);
}
