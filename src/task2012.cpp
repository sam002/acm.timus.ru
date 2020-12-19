#include <iostream>
#include "task.h"

void solution2012()
{
    int first;
    std::cin >> first;
    if(std::cin.fail())
    {
        return;
    }
    if((12 - first) < 6) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

auto task2012_1 = new task(2012,
                           "7",
                           "YES\n",
                           &solution2012
);

auto task2012_2 = new task(2012,
                           "5",
                           "NO\n",
                           &solution2012
);

