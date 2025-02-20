#include <iostream>
using namespace std;

int main()
{
    int a = 45;

    cout << "The value is: " << a << endl;

    cout << endl;

    a += 5;
    cout << "The value is (after +=5): " << a << endl;
    cout << endl;

    a -= 5;
    cout << "The value is (after -=5): " << a << endl;
    cout << endl;

    a *= 5;
    cout << "The value is (after *=5): " << a << endl;
    cout << endl;

    a /= 3;
    cout << "The value is (after /=3): " << a << endl;
    cout << endl;

    a %= 5;
    cout << "The value is (after %=5): " << a << endl;
    return 0;
}