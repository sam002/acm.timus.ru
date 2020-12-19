#include <iostream>
#include "task.h"

void solution1409()
{
    long long garry;
    long long larry;
    std::cin >> garry;
    if(std::cin.fail())
    {
        return;
    }
    std::cin >> larry;
    if(std::cin.fail())
    {
        return;
    }

    std::cout << --larry << " " << --garry << std::endl;
}

auto task1409 = new task(1409,
                           "4 7",
                           "6 3\n",
                           &solution1409
);

