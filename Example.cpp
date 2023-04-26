#include "Math.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "e   : " << std::setprecision(17) << System::Math::E << "\n";
    std::cout << "pi  : " << std::setprecision(17) << System::Math::PI << "\n";
    std::cout << "tau : " << std::setprecision(17) << System::Math::Tau << "\n";
    return 0;
}