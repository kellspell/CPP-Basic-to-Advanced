#include <iostream>
using namespace std;

int main()
{
    // Printing some data
    cout << "Hello World!" << endl;

    int age(21);
    cout << "I am " << age << " years old." << endl;

    // Lets show some errors message
    cerr << "Error message : Something went wrong" << endl;
    clog << "Log message : Something went wrong" << endl;

    // Lets get some input
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;

    // how to get taka with spaces
    string full_name;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;

        return 0;
}