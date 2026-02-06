#include "../include/Library.h"

int main() 
{
    Library testLib;

    testLib.addBook(Book(201, "My First Book", "Sam Writer"));
    testLib.addUser(User(301, "Danny"));

    
    testLib.borrowBook(301, 201);
    testLib.returnBook(301, 201);

    
    testLib.borrowBook(301, 999);

    return 0;
}
