#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 3;

protected:
    int prot = 4;

public:
    int pub = 5;

    // Functions to access the private and protected members of the class
    int getPvt()
    {
        return pvt;
    }
};

class Derived : public Base
// This class is derived or inherited from the Base class
{
public:
    int getProt()
    {
        return prot;
    }
};
int main()
{
    Derived obj1;
    cout << "Private = " << obj1.getPvt() << endl;
    cout << "Protected = " << obj1.getProt() << endl;
    cout << "Public = " << obj1.pub << endl;
    return 0;
}