#include <iostream>
#include <vector>
#include "calculator.h"
#include "utils.h"

int main() {
    std::cout << "=== C++ Project Demo ===" << std::endl;
    
    // Calculator demo
    Calculator calc;
    std::cout << "Calculator: 10 + 5 = " << calc.add(10, 5) << std::endl;
    std::cout << "Calculator: 10 - 5 = " << calc.subtract(10, 5) << std::endl;
    std::cout << "Calculator: 10 * 5 = " << calc.multiply(10, 5) << std::endl;
    std::cout << "Calculator: 10 / 5 = " << calc.divide(10, 5) << std::endl;
    std::cout << "Calculator: 2^3 = " << calc.power(2, 3) << std::endl;
    std::cout << "Calculator: sqrt(16) = " << calc.sqrt(16) << std::endl;
    
    // Utils demo
    std::cout << "\nUtils Demo:" << std::endl;
    std::string text = "  Hello, World!  ";
    std::cout << "Trimmed: '" << Utils::trim(text) << "'" << std::endl;
    
    std::vector<std::string> parts = Utils::split("apple,banana,cherry", ',');
    std::cout << "Split result: ";
    for (const auto& part : parts) {
        std::cout << "[" << part << "] ";
    }
    std::cout << std::endl;
    
    std::cout << "Is '123' a number? " << (Utils::isNumber("123") ? "Yes" : "No") << std::endl;
    std::cout << "Is 17 prime? " << (Utils::isPrime(17) ? "Yes" : "No") << std::endl;
    std::cout << "5! = " << Utils::factorial(5) << std::endl;
    
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << "Average of [1,2,3,4,5] = " << Utils::average(numbers) << std::endl;
    
    return 0;
}
