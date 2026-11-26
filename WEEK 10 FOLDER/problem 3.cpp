#include <iostream>
using namespace std;
struct Book
{
    int book_id;
    string title;
    string author;
    float price;
};
void displayBook(Book b)
{
    cout << "\n----- Book Details -----";

    cout << "\nBook ID: " << b.book_id;
    cout << "\nTitle: " << b.title;
    cout << "\nAuthor: " << b.author;
    cout << "\nPrice: " << b.price;
}
int main()
{
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.book_id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, b.title);
    cout << "Enter Author Name: ";
    getline(cin, b.author);
    cout << "Enter Book Price: ";
    cin >> b.price;
    displayBook(b);
    return 0;
}
