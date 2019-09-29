#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conta_vogais(const char * s)
{
	setlocale (LC_ALL, "Potuguese");
	
	int i, num = 0;
	char vogais[10] = "AaEeIiOoUu";

	while (*s)
	{
		for (i=0; i<10; i++)
			if (*s == vogais[i])
				num++;
		s++;
	}
	return num;
}
