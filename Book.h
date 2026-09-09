#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

struct book {
    string title;
    string author;
    string isbn;
    bool isBorrowed;
    string borrowedBy; 
};

#endif