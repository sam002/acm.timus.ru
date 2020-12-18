#define BOOST_TEST_MODULE test_main

#include "../src/task.h"

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>

BOOST_AUTO_TEST_SUITE(test_print_ip)

    BOOST_AUTO_TEST_CASE(test_main_for)
    {
        for (const auto& task_item : tasks) {
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

            BOOST_CHECK_EQUAL(task_item.expected, result);
        }
    }
//    BOOST_DATA_TEST_CASE(test_main, tasks, task_item)
//    {
//        BOOST_CHECK_EQUAL(task_item.expected, task_item.solution(task_item.input));
//    }

BOOST_AUTO_TEST_SUITE_END()
