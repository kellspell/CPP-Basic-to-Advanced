#include <iostream>
using namespace std;

int main()
{
    // int *data = new int[100000000000];
    // std::cout << "Program ending well..." << std::endl;
    /* The code above will crash the program because the memory slot is too short for the value we are trying to store
    in this case we have two options to handle this situation:
    1. use exception handling or
    2. std::nothrow

    */

    // Using exception handling
    for (size_t i{0}; i < 100; i++)
    {

        try
        {

            int *data = new int[100000000000000000];
            std::cout << "Program ending well..." << std::endl;
        }
        catch (std::exception &ex)
        {
            {
                std::cerr << "Memory allocation failed: " << ex.what() << std::endl;
                break;
            }
        }

        return 0;
    }

    // Using std::nothrow
    for (size_t i{0}; i < 100; i++)
    {

        int *data = new (std::nothrow) int[100000000000000000];
        if (data == nullptr)
        {
            std::cerr << "Memory allocation failed" << std::endl;
            break;
        }
        std::cout << "Program ending well..." << std::endl;
        return 0;
    }
}