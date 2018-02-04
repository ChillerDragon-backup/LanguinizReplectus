#include <string.h>

#include "SayField.h"
#include "pattern.h"

#define PATT(IN, OUT) if (strstr(msg, IN)){printf(OUT);return true;}

bool PattHello(const char * msg)
{
	PATT("hello ", SayHello());
	PATT("hi ", SayHello());
	PATT("yo ", SayHello());
	PATT("hallo ", SayHello());
	PATT("hey ", SayHello());
	PATT("huhu ", SayHello());
}