#include <iostream>

int main()
{
    int us1 = 0;
    int *us2 = &us1;
    
    std::cout << "us1:" << us1 << std::endl;
    std::cout << "now changing us1 variable" << std::endl;
    
    us1=69;
    
    std::cout << "us2 is a referenced variable to us1." << std::endl;
    std::cout << "us2:" << *us2 << std::endl;
    
    return 0;
}