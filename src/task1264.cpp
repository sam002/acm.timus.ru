#include <iostream>
#include "task.h"

void solution1264()
{
    int k = 0;
    int n = 0;

    std::cin >> k;
    if(std::cin.fail()) return;

    std::cin >> n;
    if(std::cin.fail()) return;

    int c = 0;
    int wait = 0;
    while (!std::cin.fail())
    {
        if(wait+c > k) {
            wait += c - k;
        } else {
            wait = 0;
        }
        std::cin >> c;
    }

    std::cout << wait << std::endl;
}

auto task1264_1 = new task(1264,
                           "5 3\n"
                           "6 7 2",
                           "0\n",
                           &solution1264
);

auto task1264_2 = new task(1264,
                           "5 3\n"
                           "20 0 0",
                           "5\n",
                           &solution1264
);

auto task1264_3 = new task(1264,
                           "4 3\n"
                           "3 4 5",
                           "1\n",
                           &solution1264
);


