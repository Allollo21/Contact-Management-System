#include <iostream>
#include <stdlib.h>#include "phone.h"
#include "email.h"
#include "address.h"
#include "contact.h"
#include "contactbook.h"
using namespace std;

void displayMenu()
{
    system("cls");
    system("color 0A");
    cout << "\t\t\t------------------------------------"<<endl;
    cout << "\t\t\t|--  CONTACT MANAGEMENT SYSTEM  ----|"<<endl;
    cout << "\t\t\t------------------------------------"<<endl;
    cout << "\t\t\t[1] Add Contact"<<endl;
    cout << "\t\t\t[2] Delete Contact"<<endl;
    cout << "\t\t\t[3] Modify Contact"<<endl;
    cout << "\t\t\t[4] Search Contact"<<endl;
    cout << "\t\t\t[5] Show All Contatcs"<<endl;
    cout << "\t\t\t[6] Exit"<<endl;
}

int main()
{
    contactbook cb;
    int choice;
    do
    {
        displayMenu();
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cb.addContact();
            break;

        case 2:
            cb.deleteContact();
            break;

        case 3:
            cb.updateContact();
            break;

        case 4:
            cb.searchContact();
            break;

        case 5:
            cb.displayAll();
            break;

        case 6:
            cout << "Thank you for using Contact Book. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    while (choice != 6);   // Repeat until the user chooses to exit

    return 0;
}
