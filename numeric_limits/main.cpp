#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // In this lesson we will learn about numeric_limits
    cout << "The value is: " << std::numeric_limits<int>::max() << endl;
    cout << "The value is: " << std::numeric_limits<int>::min() << endl;
    cout << "The value is: " << std::numeric_limits<float>::max() << endl;
    cout << "The value is: " << std::numeric_limits<float>::min() << endl;
    cout << "The value is: " << std::numeric_limits<double>::max() << endl;
    cout << "The value is: " << std::numeric_limits<double>::min() << endl;
    cout << "The value is: " << std::numeric_limits<long double>::max() << endl;
    cout << "The value is: " << std::numeric_limits<long double>::min() << endl;

    cout << "The value is: " << std::numeric_limits<int>::is_signed << endl;
    cout << "The value is: " << std::numeric_limits<int>::is_integer << endl;
    cout << "The value is: " << std::numeric_limits<int>::is_bounded << endl;
    cout << "The value is: " << std::numeric_limits<int>::is_iec559 << endl;
    cout << "The value is: " << std::numeric_limits<int>::digits << endl;
    cout << "The value is: " << std::numeric_limits<int>::digits10 << endl;
    cout << "The value is: " << std::numeric_limits<int>::max_exponent << endl;
    cout << "The value is: " << std::numeric_limits<int>::min_exponent << endl;

    return 0;
}