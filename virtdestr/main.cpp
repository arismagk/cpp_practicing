#include <iostream>
#include <string.h>
using namespace std;


extern void upstr(char *);

class Str{
public:
	Str(const char* b_) { set(b_); }
	~Str() { 
		cout << "~Str() deleting " << b << endl; 
		delete [] b; 
	}
	Str& operator=(const Str& bs) { 
		if( this != &bs) {
			delete [] b; 
			set(bs.b); 
		}
		return *this;
	}
	friend ostream& operator<<(ostream&, const Str&);
private:
	void set(const char *b_){
		b = new char[strlen(b_)+1];
		strcpy(b, b_);
	}
protected:
	char *b;
};


ostream& operator<<(ostream& os, const Str& tekst)
{
	os << tekst.b;
	return os;
}


class UpStr : public Str{
public:
	UpStr(const char *b_) : Str(b_) { 
		upstr(b); 
	}
	~UpStr() { 
		cout << "~Upstr() called" << endl; 
	}

	UpStr& operator=(const Str& bs){		
		if( this != &bs ) {
			Str::operator=(bs);
			upstr(b);
		}
		return *this;
	}
};


int main()
{
	Str *bp;

	Str   s("AaAaAaAa");
	UpStr u("BbBbBbBb");

	bp = &s; 
	cout << *bp << endl;		// ????????
	bp = &u; 
	cout << *bp << endl;		// ????????

	*bp = s;			// assign 's' to 'u'
					// (via 'bp')

	cout << *bp << endl;		// ????????
	
	return 0;
}
