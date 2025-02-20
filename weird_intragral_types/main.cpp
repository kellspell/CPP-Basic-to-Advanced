#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // this lesson we are going to learn about integral types
    short int var1{10};
    short int var2{20};

    char var3{30};
    char var4{40};

    cout << "The size of var1 is: " << sizeof(var1) << endl;
    cout << "The size of var2 is: " << sizeof(var2) << endl;
    cout << "The size of var3 is: " << sizeof(var3) << endl;
    cout << "The size of var4 is: " << sizeof(var4) << endl;

    auto result = var1 + var2;
    cout << "The result is: " << sizeof(result) << endl;
    cout << endl;

    auto result2 = var3 + var4;
    cout << "The result is: " << sizeof(result2) << endl;
    return 0;
}