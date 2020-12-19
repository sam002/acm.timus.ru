#include <iostream>
#include "task.h"

void solution1877()
{
    long long first;
    long long second;
    std::cin >> first;
    if(std::cin.fail())
    {
        return;
    }
    std::cin >> second;
    if(std::cin.fail())
    {
        return;
    }
    if(second != 0 && (second%2==1 || first%2==0)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
}

auto task1877_1 = new task(1877,
                           "0001\n"
                           "0000",
                           "no\n",
                           &solution1877
);

auto task1877_2 = new task(1877,
                           "0002\n"
                           "0001",
                           "yes\n",
                           &solution1877
);

