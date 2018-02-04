#include "SayField.h"

char aSmallMessages[SMALL_LEN][MAX_MESSAGE_LEN];
char aMediumMessages[MEDIUM_LEN][MAX_MESSAGE_LEN];
char aLargeMessages[LARGE_LEN][MAX_MESSAGE_LEN];

#define SADD(INDEX, MESSAGE) strcpy(aSmallMessages[INDEX], MESSAGE);
#define MADD(INDEX, MESSAGE) strcpy(aMediumMessages[INDEX], MESSAGE);
#define LADD(INDEX, MESSAGE) strcpy(aLargeMessages[INDEX], MESSAGE);

#define print_small() return aSmallMessages[rand() % SMALL_LEN];
#define print_medium() printf(aMediumMessages[rand() % MEDIUM_LEN]);
#define print_large() printf(aLargeMessages[rand() % LARGE_LEN]);

const char * SayHello()
{
	SADD(0, "yo");
	SADD(1, "hi");
	SADD(2, "hey");
	SADD(3, "hello");
	SADD(4, "priviet");
	SADD(5, "wena");
	SADD(6, "Hello");
	SADD(7, "Hi c;");
	SADD(8, "Olla");
	SADD(9, "Huiii");
	SADD(10, "Hi there");
	SADD(11, "sup");
	SADD(12, "hello my friend");
	SADD(13, "hey!");
	SADD(14, "Hey");
	SADD(15, "huhu");

	print_small();
}

const char * SayRandom()
{
	SADD(0, "this is a random reply");
	SADD(1, "i like trains");
	SADD(2, "this didn't sense at all");
	SADD(3, "this isn't funny");
	SADD(4, "wanna marry me?");
	SADD(5, "i like bananas");
	SADD(6, "what? xd");
	SADD(7, "?????");
	SADD(8, "i don't care...");
	SADD(9, "english please");
	SADD(10, "i didn't get you there");
	SADD(11, "what does this even mean?");
	SADD(12, "what are you trying to tell me?");
	SADD(13, "technically this is illegal");
	SADD(14, "ye?");
	SADD(15, "wait... what?!");

	print_small();
}