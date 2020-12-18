#include <utility>
#include <string>
#include <vector>

#ifndef MAIN_TASK_H
#define MAIN_TASK_H

class task;

inline std::vector<task> tasks;

class task {
public:
    task(uint id_, std::string input_,std::string expected_, void (solution_)()):
            id(id_), input(std::move(input_)), expected(std::move(expected_)), solution(solution_)
    {
        tasks.push_back(*this);
    };

    const uint id;
    const std::string input;
    const std::string expected;

    void (*solution)();
};

#endif //MAIN_TASK_H
