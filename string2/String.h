#ifndef STRING_HXX
#define STRING_HXX

#include <cstring>
#include <iostream>
/* 
 * class String is 'basic' like string 
 *
 */

class String {

public: 
	String(const char *ns) {
		len = strlen(ns) ;
		s = new char[len+1];
		strcpy(s, ns);
	}

	String() {
		s = new char[1];
		s[0] = 0;
		len = 0;
        }

	String(const String &x) {
		s = new char[(len=x.len)+1];
		strcpy(s, x.s) ;
	}

	~String() {
		delete [] s;
	}

	friend std::ostream& operator<<(std::ostream& os, const String&);
private:
	char* s;
	int len;

}; 

std::ostream& operator<<(std::ostream& os, const String& text) {
	os << text.s;
	return os;
}	
#endif /* STRING_HXX */
