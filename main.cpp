#include "ui.h"
#include "core.h"
#include <iostream>

int main()
{
    vector<book> books;
    vector<user> users;
    loadBooks(books);
    loadUsers(users);

    cout << "##################################\n";
    cout << "Welcome to the Library Management System\n";
    cout << "##################################\n";

    while (true)
    {
        showMenu();
        int op; cin >> op;

        if (op == 1) handleAddBook(books);
        else if (op == 2) handleShowBooks(books);
        else if (op == 3) handleBorrowBook(books, users);
        else if (op == 4) handleReturnBook(books);
        else if (op == 5) handleDeleteBook(books);
        else if (op == 6) handleAddUser(users);
        else if (op == 0) break;
        else cout << "Invalid choice.\n";
    }

    cout << "Thanks for using the Library System!\n";
    return 0;
}