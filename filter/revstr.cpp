#include <string.h>
#include "atfuncs.h"

char*
revstr(char *o)
{
	// reverse a string
	register char *l, *r;
	int len = strlen(o);

	if (len > 1){
		//calc middle point and set l and r at both sides
		r = l = o + len/2 - 1;
		if (len%2){
			r += 2;
		} else {
			++r;
		}
		//swap from inner to outer
		for (; *r; --l, ++r){
			char tmp;
			tmp = *l;
			*l = *r;
			*r = tmp;
		}
	}
	return o;
}
