#include <iostream>

int main()
{
    double total = 0, input = 0; // doubles for cash (10.96)
    while(std::cin >> input) // while cin can go into input, input then equals what was put in
        total += input; // add input to total
    std::cout << total << std::endl; // print total after cin can not go into input.
    return 0;
}