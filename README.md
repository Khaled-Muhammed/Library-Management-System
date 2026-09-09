# Library Management System

A modular **Library Management System** developed in **C++** with a focus on clean code organization and Object-Oriented Programming principles.

The project is structured into separate components for managing library entities, implementing the core system logic, and handling the user interface.

---

## Table of Contents

* [Overview](#overview)
* [Features](#features)
* [Technologies](#technologies)
* [Project Architecture](#project-architecture)
* [Project Structure](#project-structure)
* [Classes and Components](#classes-and-components)
* [OOP Concepts](#oop-concepts)
* [How It Works](#how-it-works)
* [Getting Started](#getting-started)
* [Compilation](#compilation)
* [Usage](#usage)
* [Future Improvements](#future-improvements)
* [Author](#author)

---

## Overview

The **Library Management System** is a console-based C++ project designed to simulate common operations in a library environment.

The system is built with a modular architecture where responsibilities are divided into different files instead of placing the entire application inside a single source file.

This approach makes the project easier to:

* Understand
* Maintain
* Debug
* Extend
* Reuse

---

## Features

### Book Management

* Add books
* Remove books
* Search for books
* Display book information
* Manage book-related data

### User Management

* Add library users
* Remove users
* Search for users
* Display user information
* Manage user-related data

### System Management

* Centralized core system logic
* Separate user interface layer
* Organized source and header files
* Easy-to-extend project structure

---

## Technologies

| Technology | Usage                         |
| ---------- | ----------------------------- |
| C++        | Main programming language     |
| OOP        | Application design            |
| STL        | Data structures and utilities |
| Git        | Version control               |
| GitHub     | Project hosting               |

---

## Project Architecture

The project follows a simple layered structure:

```text
                +----------------+
                |    main.cpp    |
                +--------+-------+
                         |
                         v
                +----------------+
                |     ui.cpp     |
                |     ui.h       |
                +--------+-------+
                         |
                         v
                +----------------+
                |    core.cpp    |
                |    core.h      |
                +--------+-------+
                         |
              +----------+----------+
              |                     |
              v                     v
        +-----------+        +-----------+
        |  Book.h   |        |  User.h   |
        +-----------+        +-----------+
```

### Separation of Responsibilities

**`main.cpp`**

Responsible for starting the application and connecting the main components.

**`ui.h / ui.cpp`**

Responsible for handling interaction between the user and the system.

**`core.h / core.cpp`**

Contains the main business logic and system operations.

**`Book.h`**

Contains the definition of the Book entity.

**`User.h`**

Contains the definition of the User entity.

---

## Project Structure

```text
Library-Management-System/
│
├── Book.h
├── User.h
│
├── core.h
├── core.cpp
│
├── ui.h
├── ui.cpp
│
└── main.cpp
```

---

## Classes and Components

### Book

The `Book` component represents books managed by the library.

Typical responsibilities include:

* Storing book information
* Managing book properties
* Supporting book-related operations

### User

The `User` component represents users registered in the library.

Typical responsibilities include:

* Storing user information
* Managing user properties
* Supporting user-related operations

### Core

The core layer is responsible for the main application logic.

It acts as the connection between the entities and the user interface.

### UI

The UI layer handles user interaction and provides the interface through which users communicate with the system.

---

## OOP Concepts

This project demonstrates several important Object-Oriented Programming concepts.

### Encapsulation

Related data and operations are grouped inside classes, helping protect the internal state of objects.

### Abstraction

Implementation details are separated from the parts of the program that use them.

### Classes and Objects

The system models real-world entities such as books and users using C++ classes and objects.

### Modular Design

Different responsibilities are separated into independent source and header files.

---

## How It Works

The application follows a simple flow:

```text
User
  |
  v
User Interface
  |
  v
Core System
  |
  +------------+
  |            |
  v            v
Books        Users
```

The user interacts with the application through the UI layer.

The UI forwards the required operation to the core system.

The core system performs the requested operation using the appropriate entities and data.

---

## Getting Started

### Prerequisites

To build and run the project, you need:

* A C++ compiler
* Git
* A code editor such as Visual Studio Code

A compiler supporting modern C++ standards is recommended.

---

## Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/Library-Management-System.git
```

Navigate to the project directory:

```bash
cd Library-Management-System
```

---

## Compilation

Using `g++`:

```bash
g++ main.cpp core.cpp ui.cpp -o LibrarySystem
```

---

## Running the Application

### Windows

```powershell
.\LibrarySystem.exe
```

### Linux / macOS

```bash
./LibrarySystem
```

---

## Usage

After running the application, the user can interact with the system through the provided interface.

Depending on the implemented functionality, the system can be used to perform operations related to:

* Books
* Users
* Library data
* System management

---

## Future Improvements

The project can be extended with additional functionality such as:

* Persistent data storage
* File-based storage
* Database integration
* User authentication
* Admin and user roles
* Borrowing and returning books
* Due-date management
* Late-return tracking
* Advanced search and filtering
* Sorting and pagination
* Statistics and reports
* Graphical User Interface

Possible database integrations include:

* MySQL
* SQL Server

---

## Learning Objectives

This project is useful for practicing:

* C++ programming
* Object-Oriented Programming
* Header and source file separation
* Modular software design
* Code organization
* Git and GitHub
* Basic software architecture

---

## Version Control

The project is maintained using Git and hosted on GitHub.

Typical Git workflow:

```bash
git add .
git commit -m "Update library management system"
git push
```

---

## Author

**Khaled Mohamed**

Computer Science Student
Assiut University

---

## License

This project is created for educational and development purposes.
