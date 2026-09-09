#include "ui.h"
#include "core.h"
#include <iostream>

void showMenu()
{
    cout << "\n1] Add a new book\n";
    cout << "2] Show all books\n";
    cout << "3] Borrow a book\n";
    cout << "4] Return a book\n";
    cout << "5] Delete a book\n";
    cout << "6] Add a new user\n";
    cout << "0] Exit\n";
    cout << "Enter your choice: ";
}

void handleAddBook(vector<book>& books)
{
    cin.ignore();
    string title, author, isbn;
    cout << "Enter title: "; getline(cin, title);
    cout << "Enter author: "; getline(cin, author);
    cout << "Enter ISBN: "; cin >> isbn;

    addBook(books, title, author, isbn);
    saveBooks(books);
    cout << "Book added!\n";
}

void handleShowBooks(vector<book>& books)
{
    if (books.empty()) { cout << "No books yet!\n"; return; }
    for (int i = 0; i < books.size(); i++)
        cout << i + 1 << ") " << books[i].title
             << " | " << books[i].author
             << " | ISBN: " << books[i].isbn
             << " | " << (books[i].isBorrowed ? "Borrowed by " + books[i].borrowedBy : "Available")
             << '\n';
}

void handleBorrowBook(vector<book>& books, vector<user>& users)
{
    if (books.empty()) { cout << "No books yet!\n"; return; }

    string isbn; int indx;
    do {
        cout << "Enter book ISBN: "; cin >> isbn;
        indx = findBook(books, isbn);
        if (indx == -1) cout << "Not found.\n";
    } while (indx == -1);

    if (books[indx].isBorrowed) { cout << "Already borrowed!\n"; return; }

    string userId; int uindx;
    do {
        cout << "Enter user ID: "; cin >> userId;
        uindx = findUser(users, userId);
        if (uindx == -1) cout << "User not found.\n";
    } while (uindx == -1);

    borrowBook(books, indx, userId);
    saveBooks(books);
    cout << "Borrowed successfully!\n";
}

void handleReturnBook(vector<book>& books)
{
    if (books.empty()) { cout << "No books yet!\n"; return; }

    string isbn; int indx;
    do {
        cout << "Enter book ISBN: "; cin >> isbn;
        indx = findBook(books, isbn);
        if (indx == -1) cout << "Not found.\n";
    } while (indx == -1);

    returnBook(books, indx);
    saveBooks(books);
    cout << "Returned successfully!\n";
}

void handleDeleteBook(vector<book>& books)
{
    if (books.empty()) { cout << "No books yet!\n"; return; }

    string isbn; int indx;
    do {
        cout << "Enter book ISBN: "; cin >> isbn;
        indx = findBook(books, isbn);
        if (indx == -1) cout << "Not found.\n";
    } while (indx == -1);

    removeBook(books, indx);
    saveBooks(books);
    cout << "Deleted!\n";
}

void handleAddUser(vector<user>& users)
{
    cin.ignore();
    string name, id;
    cout << "Enter user name: "; getline(cin, name);
    cout << "Enter user ID: "; cin >> id;

    addUser(users, name, id);
    saveUsers(users);
    cout << "User added!\n";
}