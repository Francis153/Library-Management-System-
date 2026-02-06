#include "Library.h"

int main(){
    Library myLib;
    
       myLib.addBook(Book(1,"Learning C++","John Smith"));
    myLib.addBook(Book(2,"OOP Fundamentals","Jane Doe"));
    myLib.addBook(Book(3,"Data Structures","Mark Twain"));

    
    myLib.addUser(User(101,"Alice"));
    myLib.addUser(User(102,"Bob"));
    myLib.addUser(User(103,"Charlie"));

    cout << "\n--- All Books ---\n";
    myLib.showAllBooks();

    cout << "\n--- Search Books ---\n";
    myLib.searchBook("Learning C++");  
    myLib.searchBook("Python Basics"); 

    cout << "\n--- Borrow Books ---\n";
    myLib.borrowBook(101,1); 
    myLib.borrowBook(102,1); 

    cout << "\n--- Return Books ---\n";
    myLib.returnBook(101,1); 
    myLib.borrowBook(102,1); 

    cout << "\n--- Remove Books ---\n";
    myLib.removeBook(2); 
    myLib.removeBook(999); 

    return 0;
}
