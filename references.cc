#include <iostream>

int main()
{
    int referencedVar = 0;
    int &referencevar = referencedVar;
    
    std::cout << "refed:" << referencedVar << std::endl;
    
    referencedVar = 69; // referencevar becomes 69 as well
    
    std::cout << "ref:" << referencevar << std::endl;
    
    referencevar = 100; // referencedVar is changed to 100
    
    std::cout << "refed:" << referencedVar << std::endl;
    
    return 0;
}