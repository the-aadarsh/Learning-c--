#include <iostream>

template<typename T>
T multiply(const T& a, const T& b) {
    return a * b;
}

template<typename T>
T divide(const T& a, const T& b) {
    return a / b;
}

int main() {
    double x = 10.0;
    double y = 5.0;

    std::cout << "Product: " << multiply(x, y) << '\n';
    std::cout << "Quotient: " << divide(x, y) << '\n';

    return 0;
}
