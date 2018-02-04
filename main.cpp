//ChillerDragon's chatbot LanguninizReplectus
//github: https://github.com/ChillerDragon/LanguinizReplectus
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>	

#define RANDOM_MESSAGES 16
#define MAX_MESSAGE_LEN 256
#define RADD(INDEX, MESSAGE) strcpy(aRandomMessages[INDEX], MESSAGE);
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
	char aRandomMessages[RANDOM_MESSAGES][MAX_MESSAGE_LEN];

	RADD(0, "this is a random reply");
	RADD(1, "i like trains");
	RADD(2, "this didn't sense at all");
	RADD(3, "this isn't funny");
	RADD(4, "wanna marry me?");
	RADD(5, "i like bananas");
	RADD(6, "what? xd");
	RADD(7, "?????");
	RADD(8, "i don't care...");
	RADD(9, "english please");
	RADD(10, "i didn't get you there");
	RADD(11, "what does this even mean?");
	RADD(12, "what are you trying to tell me?");
	RADD(13, "technically this is illegal");
	RADD(14, "ye?");
	RADD(15, "wait... what?!");

	printf(aRandomMessages[rand() % RANDOM_MESSAGES]);
}

void MainBrain(const char* msg)
{
	if (!FindMessage(msg))
		if (!FindPattern(msg))
			SayRandom();
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
