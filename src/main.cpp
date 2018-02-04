//ChillerDragon's chatbot LanguninizReplectus
//github: https://github.com/ChillerDragon/LanguinizReplectus
#include "SayField.h"

#define FIND(IN, OUT) if (!strcasecmp(msg, IN)){printf(OUT);return true;}

bool FindMessage(const char* msg)
{
	FIND("hello", SayHello());
	return false;
}

bool FindPattern(const char* msg)
{
	return false;
}

void MainBrain(const char* msg)
{
	if (!FindMessage(msg))
		if (!FindPattern(msg))
			printf(SayRandom());
}

int main(int argc, char *argv[])
{
	srand(time(NULL));
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
