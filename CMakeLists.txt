cmake_minimum_required(VERSION 3.9)
project(sonar_scanner_example)

set(CMAKE_CXX_STANDARD 17)

# 메인 애플리케이션 설정
add_executable(sonar_scanner_example src/main.cpp)

# GoogleTest 설정 (옵션 A: 서브모듈)
option(BUILD_GTEST "Build GoogleTest" ON)
add_subdirectory(external/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 테스트 활성화
enable_testing()

# 테스트 실행 파일 추가
add_executable(run_tests tests/test_main.cpp tests/my_test.cpp)
target_link_libraries(run_tests gtest gtest_main)

# 테스트 실행 규칙 추가
add_test(NAME AllTests COMMAND run_tests)
