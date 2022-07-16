#ifndef MEDIUM_H_
#define MEDIUM_H_
#include <string>
#include <iostream>
/* The medium class */
using namespace std;


class Medium {

  protected: 
    Medium(string t, double p): title{t}, price{p}{}
  public:
    void print_medium_attrs()
    {
        cout<<"Medium attributes are: "<<"\n";
        cout<<"Title: "<<title<<"\n";
        cout<<"Price: "<<price<<"\n";
    }
  private:
    string title;
    double price;

};


class Book:public Medium
{
    public:
        Book(string t, double p, string isbn_number): Medium(t,p),isbn(isbn_number){}
    private:
        string isbn;
};

class Record:public Medium
{
    public:
        Record(string t, double p, string artist_name): Medium(t,p),artist(artist_name){}
    private:
        string artist ;
};

class Biography:public Book
{
    public:
        Biography(string t, double p, string isbn_number, string person): Book(t,p,isbn_number),person(person){}
    private:
        string person;
};

#endif
