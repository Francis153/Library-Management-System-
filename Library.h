#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> allBooks;
    vector<User> allUsers;

public:
    void addBook(Book b){ allBooks.push_back(b); }
    void addUser(User u){ allUsers.push_back(u); }

    void removeBook(int bookNum){
        for(int i=0;i<allBooks.size(); i++){
            if(allBooks[i].getNumber()==bookNum){
                allBooks.erase(allBooks.begin()+i);
                cout << "Book removed!\n";
                return;
        }
        }
        cout << "Book not found!\n";
    }

    void searchBook(string name){
        for(int i=0;i<allBooks.size(); i++){
            if(allBooks[i].getName()==name){
                allBooks[i].showBook();
                return;
        }
        }
        cout << "Book not found!\n";
    }

    void borrowBook(int userId, int bookId){
        for(int i=0;i<allBooks.size(); i++){
         if(allBooks[i].getNumber()==bookId && allBooks[i].available()){
                allBooks[i].borrowBook();
        for(int j=0;j<allUsers.size(); j++){
        if(allUsers[j].getId()==userId){
                allUsers[j].borrowBook(bookId);
                cout << "Book borrowed!\n";
       return
        }
        }
        }
        }
        cout << "Cannot borrow book.\n";
    }

    void returnBook(int userId, int bookId){
       for(int i=0;i<allBooks.size(); i++){
       if(allBooks[i].getNumber()==bookId){
                allBooks[i].returnBook();
       for(int j=0;j<allUsers.size(); j++
        if(allUsers[j].getId()==userId){
                        allUsers[j].returnBook(bookId);
                        cout << "Book returned!\n";
           return;
         }
         }
         }
         }
    }

    void showAllBooks() 
   {
        for(int i=0;i<allBooks.size(); i++){
            allBooks[i].showBook(); 
    }
    }
};
#endif
