#include <iostream>
using namespace std;

// Function that takes parameter by value
void changeValue(int num) {
    // This is a COPY of original variable
    num = num + 10; // Only changes local copy
    cout << "The value of num inside function is: " << num << "\n";
}

int main() {
    int x = 5;
    cout << "Before function call: " << x << endl;

    // Passing x by value
    changeValue(x);

    cout << "After function call: " << x << endl;

    return 0;
}
