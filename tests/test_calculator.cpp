#include "../include/calculator.h"
#include <iostream>
#include <cassert>
#include <stdexcept>

void test_basic_operations() {
    Calculator calc;
    
    // Test addition
    assert(calc.add(2, 3) == 5);
    assert(calc.add(-2, 3) == 1);
    
    // Test subtraction
    assert(calc.subtract(5, 3) == 2);
    assert(calc.subtract(3, 5) == -2);
    
    // Test multiplication
    assert(calc.multiply(4, 3) == 12);
    assert(calc.multiply(-4, 3) == -12);
    
    // Test division
    assert(calc.divide(10, 2) == 5);
    assert(calc.divide(7, 2) == 3.5);
    
    std::cout << "✓ Basic operations tests passed" << std::endl;
}

void test_advanced_operations() {
    Calculator calc;
    
    // Test power
    assert(calc.power(2, 3) == 8);
    assert(calc.power(5, 0) == 1);
    
    // Test square root
    assert(calc.sqrt(16) == 4);
    assert(calc.sqrt(0) == 0);
    
    std::cout << "✓ Advanced operations tests passed" << std::endl;
}

void test_error_cases() {
    Calculator calc;
    
    // Test division by zero
    try {
        calc.divide(10, 0);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument&) {
        // Expected
    }
    
    // Test negative square root
    try {
        calc.sqrt(-1);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument&) {
        // Expected
    }
    
    std::cout << "✓ Error case tests passed" << std::endl;
}

int main() {
    std::cout << "Running Calculator tests..." << std::endl;
    
    test_basic_operations();
    test_advanced_operations();
    test_error_cases();
    
    std::cout << "All Calculator tests passed!" << std::endl;
    return 0;
}
