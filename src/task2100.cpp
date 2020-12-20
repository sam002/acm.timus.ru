#include <iostream>
#include "task.h"

void solution2100()
{
    int result = 0;

    std::cin >> result;
    if(std::cin.fail()) return;

    std::string c;
    std::cin >> c;

    while (!std::cin.fail())
    {
        if(c.find("+one") != std::string::npos) {
            result++;
        }
        std::cin >> c;
    }
    result += 2;
    if (result == 13) {
        result += 1;
    }

    std::cout << 100*result << std::endl;
}

auto task2100_1 = new task(2100,
                           "3\n"
                           "Ted+one\n"
                           "Robin\n"
                           "Barney",
                           "600\n",
                           &solution2100
);

auto task2100_2 = new task(2100,
                           "6\n"
                           "Alice+one\n"
                           "Bob+one\n"
                           "carl\n"
                           "Debora+one\n"
                           "Enrique+one\n"
                           "FRED+one\n",
                           "1400\n",
                           &solution2100
);
