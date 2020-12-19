#include <iostream>
#include "task.h"

void solution2066()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a;
    if(std::cin.fail()) return;

    std::cin >> b;
    if(std::cin.fail()) return;

    std::cin >> c;
    if(std::cin.fail()) return;

    auto max = std::max(a, std::max(b, c));
    auto min = std::min(a, std::min(b, c));
    auto mid = (a+b+c)-min-max;

    int result = std::min(min-mid-max, min-mid*max);
    std::cout << result << std::endl;
}

auto task2066_1 = new task(2066,
                           "1\n"
                           "2\n"
                           "3",
                           "-5\n",
                           &solution2066
);

auto task2066_2 = new task(2066,
                           "1\n"
                           "1\n"
                           "2",
                           "-2\n",
                           &solution2066
);

auto task2066_3 = new task(2066,
                           "5\n"
                           "2\n"
                           "1",
                           "-9\n",
                           &solution2066
);

