#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
using namespace std;

class address
{
private:
    string u_address;
    int type;
public:
    address() {}

    address (string u_address, int type)
    {
        this -> u_address = u_address;
        this -> type = type;
    }

    void setAddress(string u_address)
    {
        this -> u_address = u_address;
    }

    void setType(int type)
    {
        this -> type = type;
    }

    string getAddress()
    {
        return u_address;
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

        cout << "Address -> " << u_address <<endl;
        cout << "Address Type -> " << otype <<endl;
    }
};

#endif // ADDRESS_H
