#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

namespace Utils {
    // String utilities
    std::string trim(const std::string& str);
    std::vector<std::string> split(const std::string& str, char delimiter);
    bool isNumber(const std::string& str);
    
    // Math utilities
    bool isPrime(int number);
    int factorial(int n);
    double average(const std::vector<double>& numbers);
    
    // File utilities
    bool fileExists(const std::string& filename);
    std::string readFile(const std::string& filename);
}

#endif // UTILS_H
