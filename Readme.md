# My Online Library System (C++)

## Description
This is a project of a simple online library management systems designed to make borrowing,adding, registering new users and alseo testing scenarios 

---

## Features
- Add new books
- Register users
- Borrow books
- Return books
- Search books by title
- Remove books
- Test cases for positive and negative scenarios

---

## How to Compile & Run

### Compile Main Program:
```bash

#include "../include/Library.h"

int main() {
    Library myLib;

    // Adding books
    myLib.addBook(Book(1, "Learning C++", "John Smith"));
    myLib.addBook(Book(2, "OOP Basics", "Jane Doe"));

    // Adding users
    myLib.addUser(User(101, "Alice"));
    myLib.addUser(User(102, "Bob"));

    cout << "\nAll Books:\n";
    myLib.showAllBooks();

    cout << "\nBorrow Test:\n";
    myLib.borrowBook(101, 1);
    myLib.borrowBook(102, 1); // should fail because already borrowed

    cout << "\nReturn Test:\n";
    myLib.returnBook(101, 1);
    myLib.borrowBook(102, 1); // now works

    cout << "\nRemove Test:\n";
    myLib.removeBook(2);
    myLib.removeBook(999); // negative case

    return 0;
}
