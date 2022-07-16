#include "medium.h"

int main()
{

    // Always .99 in prices :)
    Book book("C++ programming", 299.99, "ISBN_00");
    book.print_medium_attrs();   

    Biography bio ("My turn", 13.99, "ISBN_01", "Johann Cruyff");
    bio.print_medium_attrs();

    Record record("Exile on Main street", 9.99, "The Rolling Stones");
    record.print_medium_attrs(); 

	return 0;
}
