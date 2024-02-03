# Project: Contact Management System

This project is a C++ program that allows the user to manage their contacts using a simple menu-driven interface. The user can add, delete, modify, search, and display contacts using the contact book class. The contact class consists of phone, email, and address classes as its data members.

## How to run the program

To run the program, you need a C++ compiler and an IDE (Integrated Development Environment) that supports C++. You also need to have the header files `phone.h`, `email.h`, `address.h`, `contact.h`, and `contactbook.h` in the same folder as the main file `contactbook.cpp`. You can use any compiler and IDE of your choice, such as GCC and Visual Studio Code. 

To compile the program, open the terminal or command prompt and navigate to the folder where you saved the project files. Then type the following command:

`g++ -o contactbook contactbook.cpp`

This will create an executable file named `contactbook` in the same folder. To run the program, type the following command:

`./contactbook`

The program will display a menu with six options: 1. Add Contact, 2. Delete Contact, 3. Modify Contact, 4. Search Contact, 5. Show All Contacts, and 6. Exit. The user can enter their choice and follow the instructions on the screen.

## How the program works

The program uses a class named `contactbook` to store and manipulate the contacts. The `contactbook` class has a vector of `contact` objects as its data member. The `contact` class has three data members: a `phone` object, an `email` object, and an `address` object. Each of these classes has their own constructors, getters, setters, and display functions.

The `contactbook` class also has the following member functions:

- `addContact()`: This function asks the user to enter the details of a new contact, such as name, phone number, email address, and postal address. It then creates a `contact` object with these details and adds it to the vector.
- `deleteContact()`: This function asks the user to enter the name of the contact they want to delete. It then searches the vector for the matching contact and removes it from the vector. If the contact is not found, it displays an error message.
- `updateContact()`: This function asks the user to enter the name of the contact they want to modify. It then searches the vector for the matching contact and allows the user to update any of the details, such as phone number, email address, or postal address. If the contact is not found, it displays an error message.
- `searchContact()`: This function asks the user to enter the name of the contact they want to search. It then searches the vector for the matching contact and displays its details. If the contact is not found, it displays an error message.
- `displayAll()`: This function displays the details of all the contacts in the vector in a tabular format.

The main function creates a `contactbook` object and uses a loop and a switch statement to call the appropriate member function based on the user's choice. The loop terminates when the user chooses to exit.

## Limitations and improvements

The program has some limitations and possible improvements, such as:

- The program does not check for invalid input, such as empty strings, non-numeric values, or invalid email or phone formats. The program could use input validation techniques, such as `cin.fail()` or regular expressions, to handle errors and exceptions.
- The program does not allow the user to sort, filter, or export the contacts. The program could use algorithms, such as `sort()` or `find_if()`, or libraries, such as `fstream` or `csv`, to enhance the functionality of the contact book.
- The program does not store the contacts in a persistent way, such as a file or a database. The program could use file handling or database connectivity techniques, such as `fstream` or `sqlite3`, to save and load the contacts from an external source.
