#include <stdio.h>
#include "funcs.h"

int foo(void)
{
	int flag=0;
	if (flag)
	{
		printf("hello foo\n");
	}
	else
	{
		printf("goodbye foo\n");
	}

	return 0;
}
