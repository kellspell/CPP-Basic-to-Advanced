#include <iostream>
using namespace std;

// In this lesson we will learn about arrays size

int main()
{
    // Declare array of integers
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    int count(size(arr));
    cout << "The size of the array is: " << count << endl;

    count = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << arr[0] << endl;

    for (size_t i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
};