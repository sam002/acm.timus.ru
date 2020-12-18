#include <iostream>
#include <cmath>
#include "task.h"

void solution1001()
{
    std::vector<double> numbers;
    std::string result;

    double c;
    std::cin >> c;
    while (!std::cin.fail())
    {
        numbers.emplace_back(c);
        std::cin >> c;
    }
    for(auto number = numbers.rbegin(); number != numbers.rend(); ++number) {

        char buf[2048000]; sprintf(buf, "%.4f", std::sqrt(*number));

        std::cout << std::string(buf) << std::endl;
    }
}

auto task1001 = new task(1001,
                         " 1427  0   \n"
                         "\n"
                         "   876652098643267843 \n"
                         "5276538\n"
                         "  \n"
                         "   ",
                         "2297.0716\n"
                         "936297014.1164\n"
                         "0.0000\n"
                         "37.7757\n",
                         &solution1001
);
