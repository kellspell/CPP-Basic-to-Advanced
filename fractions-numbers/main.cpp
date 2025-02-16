#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1{1.12345678901234567890f};
    double num2{1.12345678901234567890};
    long double num3{1.12345678901234567890L};

    cout << " Float: " << sizeof(num1) << " " << endl;
    cout << " Double: " << sizeof(num2) << " " << num2 << endl;
    cout << " Long Double: " << sizeof(num3) << " " << num3 << endl;

    // Precision
    cout << " Precision: " << std::setprecision(20) << endl;
    cout << " Float: " << sizeof(num1) << " " << num1 << endl;
    cout << " Double: " << sizeof(num2) << " " << num2 << endl;
    cout << " Long Double: " << sizeof(num3) << " " << num3 << endl;

    return 0;
}