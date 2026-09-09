#ifndef UI_H
#define UI_H
#include <vector>
#include "Book.h"
#include "User.h"
using namespace std;

void showMenu();
void handleAddBook(vector<book>& books);
void handleShowBooks(vector<book>& books);
void handleBorrowBook(vector<book>& books, vector<user>& users);
void handleReturnBook(vector<book>& books);
void handleDeleteBook(vector<book>& books);
void handleAddUser(vector<user>& users);

#endif