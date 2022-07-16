#include <iostream>
#include <stdlib.h>
using namespace std;

class Array {
public:
	Array();
	Array(int nrofintegers, int value);
	Array(const Array&);
	~Array();
	Array& operator=(const Array&);
	int& operator[](int index);
	int operator[](int index) const;
private:
	int *data;
	int length;
};



Array::Array() {
	length = 0;
	data = 0;
}

Array::Array(int nrofintegers, int value) {
	length = nrofintegers;
	data = new int[nrofintegers];
	for(int i=0; i<length; ++i)
		data[i] = value;
}

Array::Array(const Array& a) {
	length = a.length;
	data = new int[length];
	for(int i=0; i<length; ++i)
		data[i] = a[i];
}

Array::~Array() {
	delete [] data;
}

Array& Array::operator=(const Array& a) {
	if( this != &a ) {
		delete [] data;
		length = a.length;
	        data = new int[length];
        	for(int i=0; i<length; ++i)
                	data[i] = a[i];
	}
	return *this;
}

int& Array::operator[](int index) {
	if( index<0 || index>=length ) {
		cerr << "invalid index" << endl;
		exit(0);   // exception would be better here
	}
	return data[index];
}

int Array::operator[](int index) const {
	if( index<0 || index>=length ) {
		cerr << "invalid index" << endl;
		exit(0);   // exception would be better here
	}
	return data[index];
}
