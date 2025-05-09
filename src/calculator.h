#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // 두 수의 합을 반환
    static int add(int a, int b) {
        return a + b;
    }
    
    // 두 수의 차를 반환
    static int subtract(int a, int b) {
        return a - b;
    }
    
    // 두 수의 곱을 반환
    static int multiply(int a, int b) {
        return a * b;
    }
    
    // 두 수의 나눗셈 결과를 반환 (b가 0이면 0 반환)
    static int divide(int a, int b) {
        if (b == 0) return 0;
        return a / b;
    }
};

#endif // CALCULATOR_H