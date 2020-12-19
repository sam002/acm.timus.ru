#include <iostream>
#include "task.h"

void solution2001()
{
    int first_start;
    int second_start;
    int first_empty;
    int second_empty;
    int any;
    std::cin >> first_start;
    if(std::cin.fail()) return;
    std::cin >> second_start;
    if(std::cin.fail()) return;
    std::cin >> any;
    if(std::cin.fail()) return;
    std::cin >> second_empty;
    if(std::cin.fail()) return;
    std::cin >> first_empty;
    if(std::cin.fail()) return;
    std::cin >> any;
    if(std::cin.fail()) return;

    std::cout << first_start - first_empty << " " << second_start - second_empty << std::endl;
}

auto task2001_1 = new task(2001,
                           "1 2\n"
                           "2 1\n"
                           "0 3",
                           "1 1\n",
                           &solution2001
);

