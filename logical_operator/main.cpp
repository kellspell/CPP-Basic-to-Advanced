#include <iostream>
using namespace std;

int main()
{
    bool a{true};
    bool b{false};
    cout << "The value is: " << a << endl;
    cout << "The value is: " << b << endl;
    cout << endl;
    cout << "Logical AND" << endl;

    cout << std::boolalpha;
    cout << "a && b: " << (a && b) << endl;
    cout << "a && !b: " << (a && !b) << endl;
    cout << "!a && b: " << (!a && b) << endl;
    cout << "!a && !b: " << (!a && !b) << endl;

    return 0;
}