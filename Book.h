#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
private:
    int bookNumber;
    string bookName;
    string writer;
    bool isBorrowed;

public:
    Book(int num, string name, string w){
        bookNumber = num;
        bookName = name;
        writer = w;
        isBorrowed = false; 
    }

    int getNumber() { return bookNumber; }
    string getName() { return bookName; }
    string getWriter() { return writer; }
    bool available() { return !isBorrowed; }

    void borrowBook() { isBorrowed = true; }
    void returnBook() { isBorrowed = false; }

    void showBook(){
        cout << "BookID:" << bookNumber << " - " << bookName 
             << " by " << writer 
             << " [" << (isBorrowed ? "Not avail" : "Avail") << "]" 
             << endl;
    }
};

#endif
