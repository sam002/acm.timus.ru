#include <iostream>
#include "task.h"

void solution1785()
{
    long long c;
    std::cin >> c;
    if(std::cin.fail())
    {
        return;
    } else if (c > 0 && c < 5) {
        std::cout << "few" << std::endl;
    } else if (c < 10) {
        std::cout << "several" << std::endl;
    } else if (c < 20) {
        std::cout << "pack" << std::endl;
    } else if (c < 50) {
        std::cout << "lots" << std::endl;
    } else if (c < 100) {
        std::cout << "horde" << std::endl;
    } else if (c < 250) {
        std::cout << "throng" << std::endl;
    } else if (c < 500) {
        std::cout << "swarm" << std::endl;
    } else if (c < 1000) {
        std::cout << "zounds" << std::endl;
    } else if (c >= 1000) {
        std::cout << "legion" << std::endl;
    } else {
        std::cout << "" << std::endl;
    }
}

auto task1785_1 = new task(1785,
                           "7",
                           "several\n",
                           &solution1785
);

auto task1785_2 = new task(1785,
                           "40",
                           "lots\n",
                           &solution1785
);
