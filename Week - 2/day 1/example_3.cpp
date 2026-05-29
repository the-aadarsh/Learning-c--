#include <iostream>
using namespace std;

// Function that takes parameter by reference
void changeValue(int &num) {
    // & means 'num' is a reference to the original variable
    num = num + 10; // Directly modifies original value
}

int main() {
    int x = 5;
    cout << "Before function call: " << x << endl;

    // Passing x by reference
    changeValue(x);

    cout << "After function call: " << x << endl;

    return 0;
}
