#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 10;
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("%d", *ponteiro);
	
	return 0;
}
