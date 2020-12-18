cmake_minimum_required(VERSION 3.2)

project(main VERSION 0.1.0)



find_package(Boost COMPONENTS unit_test_framework REQUIRED)

configure_file(version.h.in version.h)

file(GLOB TASKS_SRC CONFIGURE_DEPENDS "src/task*.cpp")
set(MAIN_SRC "src/main.cpp" ${TASKS_SRC})
add_executable(main_cli ${MAIN_SRC})

add_executable(test_main tests/test_main.cpp ${TASKS_SRC})


set_target_properties(main_cli test_main PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        )

set_target_properties(test_main PROPERTIES
        COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
        INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
        )

target_link_libraries(test_main
        ${Boost_LIBRARIES}
        )

if (MSVC)
    target_compile_options(main_cli PRIVATE
            /W4
            )
    target_compile_options(main PRIVATE
            /W4
            )
    target_compile_options(test_main PRIVATE
            /W4
            )
else ()
    target_compile_options(main_cli PRIVATE
            -Wall -Wextra -pedantic -Werror
            )
    target_compile_options(test_main PRIVATE
            -Wall -Wextra -pedantic -Werror
            )
endif()



install(TARGETS main_cli RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT semen@sam002.net)

include(CPack)

enable_testing()

add_test(test_main test_main)
