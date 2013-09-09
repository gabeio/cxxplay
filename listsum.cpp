#include <iostream>

int main()
{
    int sum = 0, val = 0;
    std::cout << "Enter #s until you are done and then enter a non-number." << std::endl;
    while(std::cin >> val) // will continue running until it hit's a non-number or eof (ctrl+D)
        sum += val;
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}