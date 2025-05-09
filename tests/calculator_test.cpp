#include <gtest/gtest.h>
#include "../src/calculator.h"

// 덧셈 테스트
TEST(CalculatorTest, Addition) {
    EXPECT_EQ(Calculator::add(2, 3), 5);
    EXPECT_EQ(Calculator::add(-2, 3), 1);
    EXPECT_EQ(Calculator::add(0, 0), 0);
}

// 뺄셈 테스트
TEST(CalculatorTest, Subtraction) {
    EXPECT_EQ(Calculator::subtract(5, 3), 2);
    EXPECT_EQ(Calculator::subtract(3, 5), -2);
    EXPECT_EQ(Calculator::subtract(0, 0), 0);
}

// 곱셈 테스트
TEST(CalculatorTest, Multiplication) {
    EXPECT_EQ(Calculator::multiply(2, 3), 6);
    EXPECT_EQ(Calculator::multiply(-2, 3), -6);
    EXPECT_EQ(Calculator::multiply(0, 5), 0);
}

// 나눗셈 테스트
TEST(CalculatorTest, Division) {
    EXPECT_EQ(Calculator::divide(6, 3), 2);
    EXPECT_EQ(Calculator::divide(5, 2), 2); // 정수 나눗셈
    EXPECT_EQ(Calculator::divide(5, 0), 0); // 0으로 나누기 테스트
}

// 고의적인 실패 테스트 (테스트 시스템이 작동하는지 확인)
TEST(CalculatorTest, IntentionalFailure) {
    // 아래 줄은 주석 처리하여 테스트를 통과시키거나
    // 주석 해제하여 테스트를 실패시킬 수 있습니다
    // EXPECT_EQ(Calculator::add(2, 2), 5); // 실패할 것임: 2+2≠5
}