#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include "phone.h"
#include "email.h"
#include "address.h"
using namespace std;

class contact
{
private:
    string firstname;
    string lastname;
    phone* c_phone ;
    email* c_email ;
    address* c_address ;
public:
    contact()
    {
        c_phone = new phone;
        c_email = new email;
        c_address = new address;
    }

    void setFirstname(string firstname)
    {
        this -> firstname = firstname;
    }

    void setLastname(string lastname)
    {
        this -> lastname = lastname;
    }

    void setPhones(string phone, int type)
    {
        c_phone -> setPhone(phone);
        c_phone -> setType(type);
    }

    void setEmails(string email, int type)
    {
        c_email -> setEmail(email);
        c_email -> setType(type);
    }

    void setAdrresses(string address, int type)
    {
        c_address -> setAddress(address);
        c_address -> setType(type);
    }

    string getFirstname()
    {
        return firstname;
    }

    string getLastname()
    {
        return lastname;
    }

    string getPhones()
    {
        return c_phone -> getPhone();
    }

    string getEmails()
    {
        return c_email -> getEmail();
    }

    string getAddresses()
    {
        return c_address -> getAddress();
    }

    void print()
    {
        cout << "Name -> " <<firstname << " " <<lastname <<endl;
        c_phone -> print();
        c_email -> print();
        c_address -> print();
    }

};

#endif // CONTACT_H
