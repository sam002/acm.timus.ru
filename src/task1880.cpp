#include <iostream>
#include <unordered_map>
#include "task.h"

std::vector<int> get_num(int total) {
    std::vector<int> result;
    int c;
    while (total > 0 && !std::cin.fail()) {
        std::cin >> c;

        result.push_back(c);

        total--;
    }
    return result;
}

void solution1880()
{
    std::unordered_map<int, int> result{};

    int count = 0;
    int c;
    std::cin >> c;

    while (!std::cin.fail())
    {
        auto nums = get_num(c);
        for (auto num :nums) {
            result[num] += 1;
        }

        count++;
        std::cin >> c;
    }
    int total_nums = 0;
    for (auto item :result) {
        if (item.second == count) {
            total_nums += 1;
        }
    }

    std::cout << total_nums << std::endl;
}

auto task1880_1 = new task(1880,
                           "5\n"
                           "13 20 22 43 146\n"
                           "4\n"
                           "13 22 43 146\n"
                           "5\n"
                           "13 43 67 89 146",
                           "3\n",
                           &solution1880
);

