#include "stdafx.h"
#include <stdio.h>


void toUpper(char arg[])
{
	int i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] > 96 && arg[i] < 123)
		{
			arg[i] = arg[i] - 32;
		}
		i++;
	}
	printf("%s", arg);
}

void toDown(char * arg)
{
	int i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] > 64 && arg[i] < 90)
		{
			arg[i] = arg[i] + 32;
		}
		i++;
	}
	printf("%s", arg);
}

void firstUp(char * arg)
{
	int i = 0;
	
	if (arg[0] > 96 && arg[0] < 123)
	{
		arg[0] = arg[0] - 32;
	}

	while (arg[i] != '\0')
	{
		if (arg[i] == 32)
		{
			if (arg[i+1] > 96 && arg[i+1] < 123)
			{
				arg[i+1] = arg[i+1] - 32;
			}
		}
		i++;
	}
	printf("%s", arg);
}

int main()
{
	char arr[] = "Good morning";

	
	toUpper(arr);
	printf("\n\n");
	toDown(arr);
	printf("\n\n");
	firstUp(arr);

	_gettch();
	return 0;
}