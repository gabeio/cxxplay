#include <iostream> // is only for programs that will be taking&putting via terminal (console apps)
/*
C++11 Notes for future development of C++ programs
*/
int main()
{
    char character1 = 'a'; // can NOT be "a"
    
    int var1 = 0; // example var1 of type int
    
    while(std::cin >> var1){ // in this case checks if cin is an int that can fit into var1
        // do something while cin can be put into var1 (type check.)
    }
    
    if(std::cin >> var1) // in this case checks if cin is an int that can fit into var1
    {
        // only do if cin can be put into var1 (type check.)
    }
    
    bool error = false;
    
    if(error) // if error is true then stop program and show terminal that there was an error
    {
        std::cerr << "this will go to the error cout"
            << std::endl; // std::endl ALWAYS REQUIRED AT END OF OUTPUTS TO FLUSH BUFFERS!!!!!
        return -1; // return error
    }
    
    // referenced variables change when their reference changes it's value
    int &referenceVar = var1; // referencing var1
    
    // pointers hold the address of an object
    int *pointerVar = &var1; // pointerVar now holds the address of var1 but not the variable
    int var2 = *pointerVar; // this is how we eval the pointerVar to get the value of the address it is pointing to.
    
    return 0; // return okay
}