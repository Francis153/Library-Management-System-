#include "Library.h"

int main() {
    Library lib;

    lib.addBook(Book(1, "C++ Basics", "Bjarne"));
    lib.addBook(Book(2, "OOP Concepts", "James"));

    lib.addUser(User(101, "Alice"));
    lib.addUser(User(102, "Bob"));

    cout << "\nAll Books:\n";
    lib.displayBooks();

    cout << "\nSearch Test:\n";
    lib.searchByTitle("C++ Basics");
    lib.searchByTitle("Java");

    cout << "\nBorrow Test:\n";
    lib.borrowBook(101, 1);
    lib.borrowBook(102, 1);

    cout << "\nReturn Test:\n";
    lib.returnBook(101, 1);
    lib.borrowBook(102, 1);

    cout << "\nRemove Test:\n";
    lib.removeBook(2);
    lib.removeBook(99);

    return 0;
}
