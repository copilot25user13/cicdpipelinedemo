#include "calculator.h"
#include <cmath>
#include <stdexcept>

Calculator::Calculator() : m_initialized(true) {
}

Calculator::~Calculator() {
}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

double Calculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Calculator::sqrt(double value) {
    if (value < 0.0) {
        throw std::invalid_argument("Cannot calculate square root of negative number");
    }
    return std::sqrt(value);
}
