#include <iostream>
#include "task.h"

void solution1293()
{
    long long c;
    long long result = 2;
    std::cin >> c;
    while (!std::cin.fail())
    {
        result *= c;
        std::cin >> c;
    }
    std::cout << result << std::endl;
}

auto task1293 = new task(1293,
                         "5 2 3",
                         "60\n",
                         &solution1293
);
