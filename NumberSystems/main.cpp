#include <iostream>
using namespace std;

int main()
{
    int num1 = 15;         // Decimal
    int num2 = 017;        // Octal
    int num3 = 0x0F;       // Hexadecimal
    int num4 = 0b00001111; // Binary

    cout << " Decimal: " << num1 << endl;
    cout << " Octal: " << num2 << endl;
    cout << " Hexadecimal: " << num3 << endl;
    cout << " Binary: " << num4 << endl;

    return 0;
}