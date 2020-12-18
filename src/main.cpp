#include <iostream>
#include <sstream>

#include "task.h"

int main() {
    try {
        std::cout << "Start tasks checks..." << std::endl;
        for (const auto& task_item : tasks) {
            std::cout << "ID" << task_item.id << std::endl;

            std::stringstream stream_input(task_item.input);
            auto orig_out_rdbuf = std::cout.rdbuf();
            std::cin.rdbuf(stream_input.rdbuf());

            std::stringstream stream_output;
            auto orig_in_rdbuf = std::cout.rdbuf();
            std::cout.rdbuf(stream_output.rdbuf());
            task_item.solution();

            std::cin.rdbuf(orig_in_rdbuf);
            std::cout.rdbuf(orig_out_rdbuf);
            std::string result = stream_output.str();
            if (result != task_item.expected) {
                std::cout << "Error" << std::endl;
                std::cout << "Result : " << std::endl << "\"" << result << "\"" << std::endl;
                std::cout << "Expected : " << std::endl << "\"" << task_item.expected << "\"" << std::endl;
                exit(1);
            }
            std::cout << "Success!" << std::endl;
        }
        std::cout << "Cancel tasks checks..." << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}