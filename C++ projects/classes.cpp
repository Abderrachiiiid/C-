#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string title, string author, int pages) {
            this->title = title;
            this->author = author;
            this->pages = pages;
        }
};

int main() {

    Book book1("Harry Poter", "JK Rowling", 500);

    Book book2("Lord of the Rings", "Tolkein", 700);
    book2.title = "hey";

    cout << book1.title << endl;



    return 0;
}