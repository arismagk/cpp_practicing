#ifndef ATC_MY_STRING_H
#define ATC_MY_STRING_H

#include <cstddef> // for std::size_t
#include <cstring> // for ::strlen

class my_string {
public:
    my_string(const char *p);
    std::size_t size() const;
    void print() const;

private:
    char *ptr;
    std::size_t len;
};
#endif

