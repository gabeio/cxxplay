#include <iostream>

int main()
{
    int curval = 0, val = 0;
    if(std::cin >> curval) // if input can go into type int
    {
        int cnt = 1; // counter = 1
        while(std::cin >> curval) // 
        {
            if(val==curval)
                ++cnt;
            else{
                std::cout << curval << " occurs " << cnt << " times " << std::endl;
                curval = val;
                cnt = 1;
            }
        }
        std::cout << curval << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}