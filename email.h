#ifndef EMAIL_H
#define EMAIL_H
#include <string>
using namespace std;

class email
{
private:
    string u_email;
    int type;
public:
    email() {}

    email (string u_email, int type)
    {
        this -> u_email = u_email;
        this -> type = type;
    }

    void setEmail(string u_email)
    {
        this -> u_email = u_email;
    }

    void setType(int type)
    {
        this -> type = type;
    }

    string getEmail()
    {
        return u_email;
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

        cout << "Email -> " << u_email <<endl;
        cout << "Email Type -> " << otype <<endl;
    }
};

#endif // EMAIL_H
