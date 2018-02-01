#include <stdio.h>
#include <stdlib.h>

void MainBrain(const char* msg)
{
	printf("hello world!");
}


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		MainBrain(argv[1]);
	}
	else if (argc > 2)
	{
		printf("You talk too much bro.");
	}
	else
	{
		printf("Hm?");
	}
}
