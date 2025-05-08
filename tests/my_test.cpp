#include <gtest/gtest.h>
#include "../your_source_file.h" // 테스트할 소스 파일 포함

// 테스트 예시
TEST(YourClassTest, TestFunctionality) {
    // 테스트 코드 작성
    ASSERT_EQ(1, 1);
    // 실제 함수 테스트
    EXPECT_EQ(add(2, 3), 5);
}
