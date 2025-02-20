#include <iostream>
using namespace std;

// In this lesson we'll learn about the boolean type
int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        cout << "Stop" << endl;
    }
    else
    {
        cout << "Go" << endl;
    }

    if (green_light)
    {
        cout << "The green light is on" << endl;
    }
    else
    {
        cout << "The green light is off" << endl;
    }

    cout << "---------------------------------" << endl;

    // Check the sizeof the boolean type
    cout << "Sizeof bool: " << sizeof(bool) << " bytes" << endl;

    cout << "---------------------------------" << endl;

    // Printing out a boolean value
    // 1 --> true
    // 0 --> false
    cout << "Sizeof bool: " << sizeof(bool) << " bytes" << endl;
    cout << "true: " << 1 << endl;
    cout << "false: " << 0 << endl;

    cout << "---------------------------------" << endl;

    return 0;
}