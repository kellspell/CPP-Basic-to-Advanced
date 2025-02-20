#include <iostream>
using namespace std;

// In this lesson we'll learn about switch statements
int main()
{
    int num1{5};
    switch (num1)
    {
    case 1:
        cout << "num1 is 1" << endl;
        break;
    case 2:
        cout << "num1 is 2" << endl;
        break;
    case 3:
        cout << "num1 is 3" << endl;
        break;
    case 4:
        cout << "num1 is 4" << endl;
        break;
    case 5:
        cout << "num1 is 5" << endl;
        break;
    default:
        cout << "num1 is not 1-5" << endl;
        break;
    }
    return 0;
}