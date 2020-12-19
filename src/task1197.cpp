#include <iostream>
#include "task.h"

void solution1197()
{
    int a = 0;

    std::cin >> a;
    if(std::cin.fail()) return;

    char b = 0;
    int c = 0;

    std::cin >> b;
    while (!std::cin.fail())
    {
        int total = 8;
        std::cin >> c;

        if(std::cin.fail()) return;

        if (b < 'a' || b > 'h' || c < 1 || c > 8) {
            return;
        }

        if (b == 'a' || b == 'h') {
            if (c == 1 || c == 8) {
                total -= 6;
            } else if (c == 2 || c == 7) {
                total -= 5;
            } else {
                total -= 4;
            }
        } else if (b == 'b' || b == 'g') {
            if (c == 1 || c == 8) {
                total -= 5;
            } else if (c == 2 || c == 7) {
                total -= 4;
            } else {
                total -= 2;
            }
        } else {
            if (c == 1 || c == 8) {
                total -= 4;
            } else if (c == 2 || c == 7) {
                total -= 2;
            }
        }
        std::cout << total << std::endl;

        std::cin >> b;
    }
}

auto task1197 = new task(1197,
                           "3\n"
                           "a1\n"
                           "d4\n"
                           "a2\n"
                           "a3\n"
                           "b1\n"
                           "b2\n"
                           "b3\n"
                           "c1\n"
                           "c2\n"
                           "c3\n"
                           "g6",
                           "2\n"
                           "8\n"
                           "3\n"
                           "4\n"
                           "3\n"
                           "4\n"
                           "6\n"
                           "4\n"
                           "6\n"
                           "8\n"
                           "6\n",
                           &solution1197
);
