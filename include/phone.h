#ifndef PHONE_H
#define PHONE_H
#include <string>
using namespace std;

class phone
{
private:
    string u_phone;
    int type;
public:
    phone() {}

    phone (string u_phone, int type)
    {
        this -> u_phone = u_phone;
        this -> type = type;
    }

    void setPhone(string u_phone)
    {
        this -> u_phone = u_phone;
    }

    void setType(int type)
    {
        this -> type = type;
    }

    string getPhone()
    {
        return u_phone;
    }

    string getType()
    {
        string otype;
        if (type==1)
            otype = "Work";
        if (type==2)
            otype = "Home";
        if (type==0)
            otype = "Other";
        return otype;
    }

    void print()
    {
        string otype;
        if (type==1)
            otype = "Work";
        if (type==2)
            otype = "Home";
        if (type==0)
            otype = "Other";

        cout << "Phone -> " << u_phone <<endl;
        cout << "Phone Type -> " << otype <<endl;
    }
};

#endif // PHONE_H
