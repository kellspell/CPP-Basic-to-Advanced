#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // std:flush
    cout << "Hello World!" << endl
         << flush;
    cout << "====================================" << endl;
    // std:setw()right or internal
    cout << "Hello World!" << endl
         << setw(20) << "Hello World!" << endl;
    cout << "====================================" << endl;
    // std:setfill()
    cout << "Hello World!" << endl
         << setfill('*') << setw(20) << "Hello World!" << endl;
    cout << "====================================" << endl;
    // std:boolalpha
    cout << std::boolalpha;
    cout << "The value is: " << true << endl;
    cout << "The value is: " << false << endl;
    cout << "====================================" << endl;
    // std:noboolalpha
    cout << std::noboolalpha;
    cout << "The value is: " << true << endl;
    cout << "The value is: " << false << endl;
    cout << "====================================" << endl;
    // std:showpos
    cout << std::showpos;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:noshowpos
    cout << std::noshowpos;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:internal
    cout << std::internal;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:left
    cout << std::left;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:right
    cout << std::right;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:dec
    cout << std::dec;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:hex
    cout << std::hex;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:oct
    cout << std::oct;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:fixed
    cout << std::fixed;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:scientific
    cout << std::scientific;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:showbase
    cout << std::showbase;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:showpoint
    cout << std::showpoint;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:uppercase
    cout << std::uppercase;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:unitbuf
    cout << std::unitbuf;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:nounitbuf
    cout << std::nounitbuf;
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:setprecision()
    cout << std::setprecision(5);
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:resetiosflags()
    cout << std::resetiosflags(std::ios::unitbuf);
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;
    // std:setiosflags()
    cout << std::setiosflags(std::ios::unitbuf);
    cout << "The value is: " << 100 << endl;
    cout << "The value is: " << -100 << endl;
    cout << "====================================" << endl;

    return 0;
}