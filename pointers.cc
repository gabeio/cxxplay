#include <iostream>

int main()
{
    int source = 1234;
    
    std::cout << "source:" << source << std::endl;
    
    int *pointer = &source; // now holds address of source
    
    std::cout << "pointer:" << pointer << std::endl;
    std::cout << "*pointer:" << *pointer << std::endl;
    
    std::cout << "source can also be changed by pointing" << std::endl;
    *pointer = 4321;
    
    std::cout << "source:" << source << std::endl;
    
    int **pointer2 = &pointer; // points to a pointer
    
    std::cout << "pointer2:" << pointer2 << std::endl;
    std::cout << "*pointer2:" << *pointer2 << std::endl;
    std::cout << "**pointer2:" << **pointer2 << std::endl;
    
    return 0;
}