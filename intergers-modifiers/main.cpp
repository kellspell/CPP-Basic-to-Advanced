#include <iostream>
using namespace std;

int main()
{
    int num1{15};
    int num2{-300};

    // Here we could specify the type of the variables
    signed int num3{15};
    signed int num4{-300};

    // Or we could specify the positive only type of the variables
    unsigned int num5{15};
    unsigned int num6{300};

    cout << " Num1: " << num1 << endl;
    cout << " Num2: " << num2 << endl;
    cout << " Sizedof: " << sizeof(num1) << endl;
    cout << " Sizedof: " << sizeof(num2) << endl;

    // Signed variables
    cout << " Num3: " << num3 << endl;
    cout << " Num4: " << num4 << endl;
    cout << " Sizedof: " << sizeof(num3) << endl;
    cout << " Sizedof: " << sizeof(num4) << endl;

    // Unsigned variables
    cout << " Num5: " << num5 << endl;
    cout << " Num6: " << num6 << endl;
    cout << " Sizedof: " << sizeof(num5) << endl;
    cout << " Sizedof: " << sizeof(num6) << endl;

    return 0;
}