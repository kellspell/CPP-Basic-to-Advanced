#include <iostream>
using namespace std;

// In this lesson we will learn about arrays

int main()
{
    // Declare array of integers
    int arr[5];

    // Read array elements
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print array elements
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
};