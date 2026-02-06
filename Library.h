#include <vector>

class Library {
private:
    vector<Book> books;
    vector<User> users;

    void removeBook(int id)
   {
        for (int i = 0; i < books.size(); i++) 
        {
        if (books[i].getId() == id)
        {
            books.erase(books.begin() + i);
            cout << "Book removed.\n";
        return;
        }
        }
        cout << "Book not found.\n";
    }

    void searchByTitle(string title)
   {
        for (Book &b : books) 
        {
            if (b.getTitle() == title) 
        {
                b.display();
                return;
        }
        }
        cout << "Book not found.\n";
    }

    void addUser(User u)
{
        users.push_back(u);
    }

    void borrowBook(int userId, int bookId)
{
        for (Book &b : books) 
        {
        if (b.getId() == bookId && b.available()) 
        {
                b.borrowBook();
        for (User &u : users)
        {
        if (u.getId() == userId)
        {
                u.borrow(bookId);
        cout << "Book borrowed successfully.\n";
        return;
        }
        }
            }
        }
        cout << "Borrow failed.\n";
   

public:
    void addBook(Book b)
    {
        books.push_back(b);
    }
    }

    void returnBook(int userId, int bookId) 
{
        for (Book &b : books)
            {
            if (b.getId() == bookId)
            {
                b.returnBook();
                for (User &u : users)
            {
                    if (u.getId() == userId)
            {
                        u.returnBook(bookId);
                        cout << "Book returned.\n";
                        return;
            }
            }
      }
        }
    }

    void displayBooks()
   {
        for (Book &b : books)
            b.display();
    }
};

#endif
