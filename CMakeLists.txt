cmake_minimum_required(VERSION 3.9)# 최소 cmake 버전 명시
project(sonar_scanner_example)# 프로젝트 이름 명시

set(CMAKE_CXX_STANDARD 17)# 사용할 C++ 표준(여기선 17)

add_executable(sonar_scanner_example src/main.cpp)# 빌드할 실행파일 및 소스 목록

# GoogleTest 설정
option(BUILD_GTEST "Build GoogleTest" ON)
add_subdirectory(external/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
#   1. - option(BUILD_GTEST "Build GoogleTest" ON) -
#   - CMake의 option 명령어로 BUILD_GTEST라는 Bool 옵션을 정의합니다.
#   - "Build GoogleTest"는 옵션에 대한 설명입니다.
#   - ON은 기본값으로, 이 옵션이 기본적으로 활성화됨을 의미합니다.
#   - 이 옵션을 통해 사용자는 CMake 실행 시 GoogleTest 빌드 여부를 제어할 수 있습니다.
#  2. `add_subdirectory(external/googletest)`:
#   - external/googletest 디렉토리를 빌드 프로세스에 포함시킵니다.
#   - 이는 해당 디렉토리에 있는 CMakeLists.txt를 실행하라는 의미입니다.
#   - GoogleTest는 자체 CMake 빌드 스크립트를 가지고 있으므로 이를 통해 GoogleTest 라이브러리가 빌드됩니다.
#  3. `include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})`:
#   - GoogleTest의 헤더 파일 경로를 프로젝트의 include 경로에 추가합니다.
#   - `${gtest_SOURCE_DIR}/include`는 GoogleTest의 공개 헤더 파일 위치입니다.
#   - `${gtest_SOURCE_DIR}`은 GoogleTest의 내부 헤더 파일 위치를 포함합니다.
#   - 이를 통해 프로젝트 코드에서 `#include <gtest/gtest.h>`와 같은 구문을 사용할 수 있습니다.


# 테스트 활성화
enable_testing()
#  4. `enable_testing()`:
#   - CMake의 테스트 기능을 활성화합니다.
#   - 이를 통해 `ctest` 명령어로 테스트를 실행할 수 있게 됩니다.
   
# 테스트 실행 파일 추가
add_executable(run_tests tests/test_main.cpp tests/test.cpp)
target_link_libraries(run_tests gtest gtest_main your_project_lib)
#  5. `add_executable(run_tests tests/test_main.cpp tests/your_test.cpp)`:
#   - run_tests라는 이름의 실행 파일을 생성합니다.
#   - 이 실행 파일은 tests/test_main.cpp와 tests/est.cpp 소스 파일로 구성됩니다.
#   - test_main.cpp는 일반적으로 GoogleTest 초기화 코드를 포함합니다.
#   - test.cpp는 실제 테스트 케이스를 포함하는 파일입니다.


# 테스트 실행 규칙 추가
add_test(NAME AllTests COMMAND run_tests)
#  7. `add_test(NAME AllTests COMMAND run_tests)`:
#   - CMake의 테스트 시스템에 새 테스트를 추가합니다.
#   - "AllTests"는 테스트의 이름입니다.
#   - run_tests는 테스트를 실행하기 위한 명령(실행 파일)입니다.
#   - 이 설정을 통해 `ctest` 명령어로 테스트를 실행할 수 있습니다.

