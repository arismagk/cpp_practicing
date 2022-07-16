#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
	Array();
	Array(int length);
	Array(int length, int value);
	Array(const Array&);
	~Array();
	Array& operator=(const Array&);
	int& operator[](int index);
private:
	// ???
};

#endif
