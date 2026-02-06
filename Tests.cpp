
#include "Library.h"

int main() {
    Library lib;

    lib.addBook(Book(10, "Test Book", "Tester"));
    lib.addUser(User(1, "Test User"));

    lib.borrowBook(1, 10);
    lib.returnBook(1, 10);
    lib.borrowBook(1, 99); // negative

    return 0;
}
