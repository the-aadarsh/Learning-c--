#include<iostream>
using namespace std;
// Function template to add two values of any type
template<typename T> // T is a placeholder for any datatype
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(2.5, 3.5) << endl;
    // float/double
    cout << add(1.5f, 2.5f) << endl;
    return 0;
}