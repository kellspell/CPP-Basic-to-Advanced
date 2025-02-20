#include <iostream>
using namespace std;

// In this lesson we'll learn about the ternary operator
int main()
{
    int num1{5};
    int num2{0};
    num2 = (num1 == 5) ? 50 : 100;
    cout << "The value of num2 is: " << num2 << endl;
    cout << "---------------------------------" << endl;
    return 0;
}