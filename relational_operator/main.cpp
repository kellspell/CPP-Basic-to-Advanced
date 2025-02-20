#include <iostream>
using namespace std;

int main()
{
    int num1 = 45;
    int num2 = 60;

    cout << "The value is Num1: " << num1 << endl;
    cout << "The value is Num2: " << num2 << endl;

    cout << endl;
    cout << "Comparing variables" << endl;

    cout << std::boolalpha;
    cout << "Num1 == Num2: " << (num1 == num2) << endl;
    cout << "Num1 > Num2: " << (num1 > num2) << endl;
    cout << "Num1 < Num2: " << (num1 < num2) << endl;
    cout << "Num1 >= Num2: " << (num1 >= num2) << endl;
    cout << "Num1 <= Num2: " << (num1 <= num2) << endl;

    cout << endl;
    // noboolalpha
    cout << "Not boolean" << endl;
    cout << "Num1 != Num2: " << (num1 != num2) << endl;

    return 0;
}