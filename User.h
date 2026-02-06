#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
using namespace std;

class User 
{
private:
    int id;
    string name;
    vector<int> borrowedBooks; // stores book IDs

public:
    User(int uid, string uname){
        id = uid;
        name = uname;
    }

    int getId(){ return id; }
    string getName(){ return name; }

    void borrowBook(int bookId){ borrowedBooks.push_back(bookId); }

    void returnBook(int bookId){
        for(int i=0; i<borrowedBooks.size(); i++){
       if(borrowedBooks[i]==bookId){
                borrowedBooks.erase(borrowedBooks.begin()+i);
        break;
    }
    }
    }

    void showBorrowed(){
        cout << name << " borrowed: ";
        for(int i=0; i<borrowedBooks.size(); i++){
            cout << borrowedBooks[i] << " ";
    }
        cout << endl;
    }
};

#endif
