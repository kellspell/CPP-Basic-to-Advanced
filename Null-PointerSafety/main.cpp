#include <iostream>
using namespace std;

int main()
{
    // Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check" << std::endl;

    int *p_number{};

    if (!(p_number == nullptr))
    {
        std::cout << "p_number points to a VALID address" << p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to a INVALID address" << std::endl;
    }

    // Delete the pointer after using it
    delete p_number;
    nullptr;

    cout << "====================================" << endl;

    // The code above will return a invalid address because we are not pointing to any address
    // The code below will return a valid address because we are pointing to a valid address
    // I'll assign a value to p_number using the dynamic memory allocation

    std::cout << std::endl;
    std::cout << "Verbose nullptr check" << std::endl;

    int *A_number1{};
    A_number1 = new int(10);

    if (!(A_number1 == nullptr))
    {
        std::cout << "p_number points to a VALID address" << A_number1 << std::endl;
    }
    else
    {
        std::cout << "p_number points to a INVALID address" << std::endl;
    }

    // Delete the pointer after using it
    delete A_number1;
    nullptr;

    return 0;
}