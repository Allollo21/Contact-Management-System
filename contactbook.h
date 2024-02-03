    #ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <string>
#include <stdlib.h>
using namespace std;

class contactbook
{
private:
    contact* contacts;
    int size;
    int capacity;
public:
    contactbook()
    {
        contacts = new contact[10];
        size = 0;
        capacity = 10;
    }

    ~contactbook ()
    {
        delete [] contacts;
    }

    void resize()
    {
        capacity *= 2 ;
        contact* temp  = new contact[capacity];
        for(int i=0; i<size; i++)
        {
            temp[i] = contacts[i];
        }
        delete [] contacts;
        contacts = temp;
    }

    void addContact()
    {
        system("cls");
        system("color 7");
        string firstname, lastname, phone, email, address;
        int p_type, e_type, a_type;
        if (size == capacity)
        {
            resize();
        }
        cout << "Enter First name: ";
        getline(cin >> ws, firstname);

        cout << "Enter Last Name: ";
        getline(cin >> ws, lastname);

        cout << "Enter Phone Number : ";
        getline(cin >> ws, phone);

        cout << "Enter Type of Phone (1 For Work , 2 for Home or 0 For Other): ";
        cin >> p_type;

        cout << "Enter Email : ";
        getline(cin >> ws, email);
        cout << "Enter Type of Email (1 For Work , 2 for Home or 0 For Other): ";
        cin >> e_type;

        cout << "Enter Address : ";
        getline(cin >> ws, address);
        cout << "Enter Type of Address (1 For Work , 2 for Home or 0 For Other): ";
        cin >> a_type;

        contact con;
        con.setFirstname(firstname);
        con.setLastname(lastname);
        con.setPhones(phone, p_type);
        con.setEmails(email, e_type);
        con.setAdrresses(address, a_type);
        contacts[size] = con;
        size++;
        cout << "\t\t\nContact added successfully.\n" << endl;
        system("pause");
        system("cls");

    }

    void deleteContact()
    {
        system("cls");
        system("color 7");
        string search;
        bool found = false;
        cout << "Enter Name or Phone Number: ";
        cin.ignore();
        getline(cin, search);
        for (int i=0; i < size; i++)
        {
            if(contacts[i].getFirstname() == search || contacts[i].getLastname() == search || contacts[i].getPhones() == search )
            {
                for(int j = i + 1; j < size; j++)
                {
                    contacts[j-1] = contacts[j];
                }
                size--;
                found = true;
                cout << "\t\t\nContact deleted successfully.\n\n" << endl;
                break;
            }

        }
        if(!found)
        {
            cout << "\t\t\nContact not found.\n\n" << endl;
        }
        system("pause");
        system("cls");
    }

    void searchContact()
    {
        system("cls");
        system("color 7");
        string search;
        bool found = false;
        cout << "Enter Name or Phone Number: ";
        cin.ignore();
        getline(cin, search);
        for (int i=0; i < size; i++)
        {
            if(contacts[i].getFirstname() == search || contacts[i].getLastname() == search || contacts[i].getPhones() == search )
            {
                found = true;
                cout << "\t\t\nContact found.\n\n" << endl;
                contacts[i].print();
                break;
            }

        }
        if (!found)
        {
            cout << "\t\t\nContact not found.\n\n" << endl;
        }
        system("pause");
        system("cls");
    }

    void updateContact()
    {
        system("cls");
        system("color 7");
        string search;
        bool found = false;
        cout << "Enter Name or Phone Number: ";
        cin.ignore();
        getline(cin, search);
        for (int i = 0; i < size; i++)
        {
            if(contacts[i].getFirstname() == search || contacts[i].getLastname() == search || contacts[i].getPhones() == search )
            {
                found = true;
                cout << "Contact found." << endl;
                string new_fname, new_lname, new_phone, new_email, new_address;
                int p_type, e_type, a_type;

                cout << "Enter New First Name: ";
                getline(cin >> ws, new_fname);

                cout << "Enter New Last Name: ";
                getline(cin >> ws, new_lname);

                cout << "Enter new phone: ";
                getline(cin >> ws, new_phone);

                cout << "Enter Type of Phone (1 For Work , 2 for Home or 0 For Other): ";
                cin >> p_type;

                cout << "Enter new Email: ";
                getline(cin >> ws, new_email);

                cout << "Enter Type of Email (1 For Work , 2 for Home or 0 For Other): ";
                cin >> e_type;

                cout << "Enter new Address: ";
                getline(cin >> ws, new_address);

                cout << "Enter Type of Address (1 For Work , 2 for Home or 0 For Other): ";
                cin >> a_type;

                contacts[i].setFirstname(new_fname);
                contacts[i].setLastname(new_lname);
                contacts[i].setPhones(new_phone,p_type);
                contacts[i].setEmails(new_email,e_type);
                contacts[i].setAdrresses(new_address,a_type);
                cout << "\t\t\nContact updated successfully.\n\n" << endl;
                break;
            }

        }
        system("pause");
        system("cls");
    }

    void displayAll()
    {
        system("cls");
        system("color 7");
        if (size == 0)
        {
            cout << "No contacts in the book." << endl;
        }
        else
        {
            cout << "\n\t Showing All Contacts \n\n";
            for (int i = 0; i < size; i++)
            {
                contacts[i].print();
                cout << "-----------------" << endl;
            }
        }
        system("pause");
        system("cls");
    }
};

#endif // CONTACTBOOK_H
