#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char passwd[100];

	printf("Welcome to a bank's ATM machine\n\n");
	printf("Please insert your ATM card\n and enter your 4 digit password\n");
	fgets(passwd, 100, stdin);

	if (passwd[strlen(passwd) - 1] == '\n')
		passwd[strlen (passwd)- 1] = '\0';

	check_passwd(passwd);



	return (0);
}
