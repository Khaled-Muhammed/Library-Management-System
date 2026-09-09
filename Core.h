#ifndef CORE_H
#define CORE_H
#include <vector>
#include "Book.h"
#include "User.h"
using namespace std;

void addBook(vector<book>& books, string title, string author, string isbn);
int findBook(vector<book>& books, string isbn);
void removeBook(vector<book>& books, int indx);
void borrowBook(vector<book>& books, int indx, string userId);
void returnBook(vector<book>& books, int indx);

void addUser(vector<user>& users, string name, string id);
int findUser(vector<user>& users, string id);

void saveBooks(const vector<book>& books);
void loadBooks(vector<book>& books);
void saveUsers(const vector<user>& users);
void loadUsers(vector<user>& users);

#endif