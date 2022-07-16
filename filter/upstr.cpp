#include "atfuncs.h"
#include <ctype.h>



char*
upstr(char *o)
{
	register char *p;
	for (p = o; *p ; p++){
		if (islower(*p))
			*p = toupper(*p);
	}
	return o;
}
