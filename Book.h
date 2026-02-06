#include <iostream>
using namespace std;

intmain()
{

class Book 
{
private:
    int id;
    string title;
    string author;
    bool isAvailable;

public:
    Book(id,title,author)
   {
        this->id = id;
        this->title = title;
        this->author = author;
        isAvailable = true;
    }

    int getId() 
    {return id;}
    string getTitle() 
    {return title;}
    string getAuthor() 
    {return author;}
    bool available() 
    {return isAvailable;}

    void borrowBook() {isAvailable = false;}
    void returnBook() {isAvailable = true;}

    void display() 
    {
        cout << "ID:" << id
             << ",Title:" << title
             << ",Author:" << author
             << ",Available:" << (isAvailable ? "Yes" : "No")
             << endl;
    
}

};

#endif
