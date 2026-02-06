#include "Library.h"

int main() 
{
    Library lib;

    lib.addBook(Book(3, "C++ Basics", "Kamau"));
    lib.addBook(Book(6, "OOP Concepts", "Celly"));
    
  lib.addUser(User(101, "Alice"));
    lib.addUser(User(102, "Bob"));
    cout << "\nAll Books:\n";
    lib.displayBooks();
    cout << "\nSearch Test:\n";
    lib.searchByTitle("Physics");
    
    lib.searchByTitle("English");
    cout << "\nBorrow Test:\n";
    
    lib.borrowBook(101, 3);
    lib.borrowBook(102, 3);
    cout << "\nReturn Test:\n";
    lib.returnBook(101, 3);
    lib.borrowBook(102, 3);
  cout << "\nRemove Test:\n";
    lib.removeBook(6);
    lib.removeBook(99);
    return 0;
}
