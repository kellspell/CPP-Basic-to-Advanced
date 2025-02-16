#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    // Functions to access the private and protected members of the class
    int getPvt()
    {
        return pvt; // the private member can only be accessed within the class
    }
};

class ProtectedDireved : public Base
{
public:
    int getProt()
    {
        return prot;
    }

    int getPub()
    {
        return pub;
    }
};
int main()
{
    ProtectedDireved obj1;
    cout << "Private = " << obj1.getPvt() << endl;
    cout << "Protected = " << obj1.getProt() << endl;
    cout << "Public = " << obj1.getPub() << endl;

    return 0;
}