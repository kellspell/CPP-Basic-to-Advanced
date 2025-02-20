#include <iostream>
using namespace std;

// In this lesson we'll learn about the auto type
// The compiler automatically guess the type of the variable

int main()
{
    auto num1{10};
    auto num2{3.14};
    auto num3{true};
    auto num4{'A'};
    auto num5{14.0f};
    auto num6{15.0L};

    // int modifier suffixes
    auto num7{123u};   // unsigned int
    auto num8{123ul};  // unsigned long
    auto num9{1023ll}; // long long

    // Print out the values and checking the sizeof the variables
    cout << "Variable num1: " << num1 << " Sizeof: " << sizeof(num1) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num2: " << num2 << " Sizeof: " << sizeof(num2) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num3: " << num3 << " Sizeof: " << sizeof(num3) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num4: " << num4 << " Sizeof: " << sizeof(num4) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num5: " << num5 << " Sizeof: " << sizeof(num5) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num6: " << num6 << " Sizeof: " << sizeof(num6) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num7: " << num7 << " Sizeof: " << sizeof(num7) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num8: " << num8 << " Sizeof: " << sizeof(num8) << " bytes" << endl;
    cout << "---------------------------------" << endl;
    cout << "Variable num9: " << num9 << " Sizeof: " << sizeof(num9) << " bytes" << endl;

    cout << "---------------------------------" << endl;

    return 0;
}