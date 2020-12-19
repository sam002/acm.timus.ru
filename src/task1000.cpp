#include <iostream>
#include "task.h"

void solution1000()
{
    long long c;
    long long result = 0;
    std::cin >> c;
    while (!std::cin.fail())
    {
        result += c;
        std::cin >> c;
    }
    std::cout << result << std::endl;
}

auto task1000 = new task(1000,
                         "1 5",
                         "6\n",
                         &solution1000
);
