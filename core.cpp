#include "core.h"
#include <fstream>
#include <sstream>

void addBook(vector<book>& books, string title, string author, string isbn)
{
    book bk;
    bk.title = title;
    bk.author = author;
    bk.isbn = isbn;
    bk.isBorrowed = false;
    bk.borrowedBy = "";
    books.push_back(bk);
}

int findBook(vector<book>& books, string isbn)
{
    for (int i = 0; i < books.size(); i++)
        if (books[i].isbn == isbn)
            return i;
    return -1;
}

void removeBook(vector<book>& books, int indx)
{
    books.erase(books.begin() + indx);
}

void borrowBook(vector<book>& books, int indx, string userId)
{
    books[indx].isBorrowed = true;
    books[indx].borrowedBy = userId;
}

void returnBook(vector<book>& books, int indx)
{
    books[indx].isBorrowed = false;
    books[indx].borrowedBy = "";
}

void addUser(vector<user>& users, string name, string id)
{
    user u;
    u.name = name;
    u.id = id;
    users.push_back(u);
}

int findUser(vector<user>& users, string id)
{
    for (int i = 0; i < users.size(); i++)
        if (users[i].id == id)
            return i;
    return -1;
}

void saveBooks(const vector<book>& books)
{
    ofstream out("books.txt");
    for (const auto& bk : books)
        out << bk.title << " | " << bk.author << " | " << bk.isbn
            << " | " << bk.isBorrowed << " | " << bk.borrowedBy << "\n";
    out.close();
}

void loadBooks(vector<book>& books)
{
    ifstream in("books.txt");
    string line;
    while (getline(in, line))
    {
        stringstream ss(line);
        string title, author, isbn, borrowedFlag, borrowedBy;
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, isbn, '|');
        getline(ss, borrowedFlag, '|');
        getline(ss, borrowedBy);

        book bk;
        bk.title = title;
        bk.author = author;
        bk.isbn = isbn;
        bk.isBorrowed = (borrowedFlag.find('1') != string::npos);
        bk.borrowedBy = borrowedBy;
        books.push_back(bk);
    }
    in.close();
}

void saveUsers(const vector<user>& users)
{
    ofstream out("users.txt");
    for (const auto& u : users)
        out << u.name << " | " << u.id << "\n";
    out.close();
}

void loadUsers(vector<user>& users)
{
    ifstream in("users.txt");
    string line;
    while (getline(in, line))
    {
        stringstream ss(line);
        string name, id;
        getline(ss, name, '|');
        getline(ss, id);

        user u;
        u.name = name;
        u.id = id;
        users.push_back(u);
    }
    in.close();
}