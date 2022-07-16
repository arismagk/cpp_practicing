#include <iostream>
using namespace std;

class A{
public:
	A() { 
		ida = 0; 
		cout << "I am the default constructor A()" << endl; 
	}
	A(int i) {
		ida = i; 
		cout << "I am constructor A(int)" << endl; 
	}
private:
	int ida;
};

class B{
public:
	B() { 
		idb = 0; 
		cout << "I am the default constructor B()" << endl; 
	}
	B(B& b) { 
		idb = b.idb;
		cout << "I am copy constructor B(B&)" << endl; 
	}
	B& operator=(const B& b) { 
		  idb = b.idb;
		  cout << "I am B::operator=(const B&)" << endl; 
		  return *this;
	}
private:
	int idb;
};

class C{
public:
	C(){ 
	    cout << "I am the default constructor C()" << endl;
	}
	C(C& c) : a(c.a), b(c.b) { 
	    cout << "I am copy constructor C(C&)" << endl; 
	}
	C& operator=(const C& c) { 
		b=c.b; 
		a=c.a; 
		cout << "I am C::operator=(const C&)" << endl; 
		return *this;
	}
protected:
	A a;
	B b;
};

class D : public C{
public:
	D(){ 
	    cout << "I am the default constructor D()" << endl;
	}
	D(D& d) : C(d) { 
	    cout << "I am copy constructor D(D&)" << endl; }
	 
	D& operator=(const D& d){
		C::operator=(d);
		// assign the d-C part to my C part
		// in other words: *(static_cast<C*>(this))=d;
	
		cout << "I am D::operator=(const D&)" << endl; 
		return *this;
	}
};

int main()
{
	cout << " at first the default constructor twice:" << endl;
	D d1, d2;

	cout << "\n and now the assignment operator: " << endl;

	d1 = d2;
	return 0;
}
