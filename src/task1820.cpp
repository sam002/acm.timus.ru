#include <iostream>
#include "task.h"

void solution1820()
{
    int k = 0;
    int n = 0;

    std::cin >> n;
    if(std::cin.fail()) return;

    std::cin >> k;
    if(std::cin.fail()) return;

    if(n < k) {
        std::cout << 2 << std::endl;
    } else if(0 == (2*n)%k) {
        std::cout << (int) ((n * 2) / k) << std::endl;
    } else {
        std::cout << ((int) ((n * 2)/k))+1 << std::endl;
    }
}

auto task1820_0 = new task(1820,
                           "3 3",
                           "2\n",
                           &solution1820
);

auto task1820_1 = new task(1820,
                         "4 3",
                         "3\n",
                         &solution1820
);

auto task1820_2 = new task(1820,
                           "5 3",
                           "4\n",
                           &solution1820
);

auto task1820_3 = new task(1820,
                           "6 3",
                           "4\n",
                           &solution1820
);

auto task1820_4 = new task(1820,
                           "2 2",
                           "2\n",
                           &solution1820
);

auto task1820_5 = new task(1820,
                           "3 2",
                           "3\n",
                           &solution1820
);

auto task1820_6 = new task(1820,
                           "4 2",
                           "4\n",
                           &solution1820
);

auto task1820_7 = new task(1820,
                           "3 6",
                           "2\n",
                           &solution1820
);
