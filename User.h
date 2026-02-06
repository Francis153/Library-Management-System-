#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
using namespace std;

class User {
private:
    int userId;
    string name;
    vector<int> borrowedBooks;

public:
    User(int id, string name) {
        userId = id;
        this->name = name;
    }

    int getId() { return userId; }
    string getName() { return name; }

    void borrow(int bookId) {
        borrowedBooks.push_back(bookId);
    }

    void returnBook(int bookId) {
        for (int i = 0; i < borrowedBooks.size(); i++) {
            if (borrowedBooks[i] == bookId) {
                borrowedBooks.erase(borrowedBooks.begin() + i);
                break;
            }
        }
    }

    void display() {
        cout << "User: " << name << " | Borrowed books: ";
        for (int id : borrowedBooks)
            cout << id << " ";
        cout << endl;
    }
};

#endif
