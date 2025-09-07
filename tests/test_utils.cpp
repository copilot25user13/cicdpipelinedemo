#include "../include/utils.h"
#include <iostream>
#include <cassert>
#include <stdexcept>

void test_string_utils() {
    // Test trim
    assert(Utils::trim("  hello  ") == "hello");
    assert(Utils::trim("") == "");
    assert(Utils::trim("   ") == "");
    
    // Test split
    auto result = Utils::split("a,b,c", ',');
    assert(result.size() == 3);
    assert(result[0] == "a");
    assert(result[1] == "b");
    assert(result[2] == "c");
    
    // Test isNumber
    assert(Utils::isNumber("123") == true);
    assert(Utils::isNumber("-123") == true);
    assert(Utils::isNumber("12.34") == true);
    assert(Utils::isNumber("abc") == false);
    assert(Utils::isNumber("") == false);
    
    std::cout << "✓ String utilities tests passed" << std::endl;
}

void test_math_utils() {
    // Test isPrime
    assert(Utils::isPrime(2) == true);
    assert(Utils::isPrime(17) == true);
    assert(Utils::isPrime(4) == false);
    assert(Utils::isPrime(1) == false);
    
    // Test factorial
    assert(Utils::factorial(0) == 1);
    assert(Utils::factorial(1) == 1);
    assert(Utils::factorial(5) == 120);
    
    // Test average
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(Utils::average(numbers) == 3.0);
    
    std::cout << "✓ Math utilities tests passed" << std::endl;
}

void test_error_cases() {
    // Test factorial with negative number
    try {
        Utils::factorial(-1);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument&) {
        // Expected
    }
    
    // Test average with empty vector
    try {
        std::vector<double> empty;
        Utils::average(empty);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument&) {
        // Expected
    }
    
    std::cout << "✓ Utils error case tests passed" << std::endl;
}

int main() {
    std::cout << "Running Utils tests..." << std::endl;
    
    test_string_utils();
    test_math_utils();
    test_error_cases();
    
    std::cout << "All Utils tests passed!" << std::endl;
    return 0;
}
