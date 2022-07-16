#include <iostream>
using namespace std;

class A{
public:
	A() : ida(0) { cout << "I am the default constructor A()\n";  }
	A(int i) : ida(i) { cout << "I am constructor A(int)\n";  }
private:
	int ida;
};

class B{
public:
	B() : idb(0) { cout << "I am the default constructor B()\n";  }
	B(const B& b) : idb(b.idb) {
			cout << "I am copy constructor B(B&)\n";  }
private:
	int idb;
};

class C{
public:
	C(){ cout << "I am the default constructor C()\n"; }
	C(const C& c) : a(c.a), b(c.b) {
			cout << "I am copy constructor C(C&)\n";  }
protected:
	A a;
	B b;
};

class D : public C{
public:
	D(){ cout << "I am the default constructor D()\n"; }
	D(const D& d) : C(d) { cout << "I am copy constructor D(D&)\n";  } 
};

int main()
{
	cout << " first a 'default' constructor:\n"; 
	D defd;

	cout << "\n and now the copy constructor: \n"; 

	D copd(defd);
	return 0;
}
