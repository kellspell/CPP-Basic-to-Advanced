#include <iostream>
#include <iomanip>
using namespace std;

// This lesson we'll learn to to work with floating point numbers

int main()
{
    float num10{1.234567891234567890f};
    double numb11{1.234567891234567890};
    long double num12{1.234567891234567890};

    // Print out the values
    cout << "Sizeof float: " << sizeof(float) << " bytes" << endl;
    cout << "Sizeof double: " << sizeof(double) << " bytes" << endl;
    cout << "Sizeof long double: " << sizeof(long double) << " bytes" << endl;

    cout << "---------------------------------" << endl;

    // Precision
    cout << fixed << setprecision(20);
    cout << "float: " << num10 << endl;
    cout << "double: " << numb11 << endl;
    cout << "long double: " << num12 << endl;

    cout << "---------------------------------" << endl;

    // Here we are showing a error in the floating point numbers
    // when we add a number that is too large for a float
    float num13{123456789123456789123456789123456789.0f}; // Error: narrow conversion
    cout << "Sizeof float: " << sizeof(float) << " bytes" << endl;
    cout << "float: " << num13 << endl;

    cout << "---------------------------------" << endl;
    return 0;
}
