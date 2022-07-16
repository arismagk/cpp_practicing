#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <algorithm>
#include <array>
#include <utility>



class Array {
public:
	Array();
	Array(int length);
	Array(int length, int value);
	Array(const Array&);
	~Array();
	Array& operator=(const Array& array);
	int& operator[](int index);
	int size() const;
    void print_array (Array& a);
private:
	int* elem;
    int sz;
};

#endif
