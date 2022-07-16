#include <iostream>
using namespace std;

#include "uppercase.h"	// contains class uppercase filter
#include "reverse.h"	// contains class reverse filter

char s[] = "lower case string";

int main()
{
	filtmanager mngr;
	uppercase   up_filter;
	reverse     rev_filter;

	mngr.append(up_filter);
	mngr.append(rev_filter);

	mngr.execute(s);

	cout << s;	// "GNIRTS ESAC REWOL"
	return 0;
}
