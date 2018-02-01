//ChillerDragon's chatbot LanguninizReplectus
//github: https://github.com/ChillerDragon/LanguinizReplectus
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIND(IN, OUT) if (!strcasecmp(msg, IN)){printf(OUT);return true;}

bool FindMessage(const char* msg)
{
	FIND("hello", "hey");
	return false;
}

bool FindPattern(const char* msg)
{
	return false;
}

void SayRandom()
{
	printf("this is a random reply");
}

void MainBrain(const char* msg)
{
	if (!FindMessage(msg))
		if (!FindPattern(msg))
			SayRandom();
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
