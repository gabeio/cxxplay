#include <iostream>

int fnc()
{
    return 512;
}

int main()
{
    // const int i; // error not initialized.
    const int z = 5;
    
    // extern const int bitSize = fnc(); // extern allows to be used extern(ally)... ??
    
    // z = 0; // error can not change variable of a const
    
    int bit = 1;
    const int &byte = bit; // constant reference (not variable)
    
    bit = 2; // on source change
    std::cout << byte << std::endl; // reference changed also byte=2;
    
    double bytes = 9; // source
    const double *byter = &bytes; // constant pointer (always same memory location)
    
    free(&bytes); // causes error because byter is now pointing to wrong memory space.
    
    bytes=10; // obviously won't work (unless free(x) is commented out)
    std::cout << *byter << std::endl;
    
    return 0;
}