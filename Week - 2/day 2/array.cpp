#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 4, 5, 6};
    int length = 5;

    cout << sizeof(arr) << " bytes" << endl;
    cout << sizeof(arr[0]) << " bytes" << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << " elements" << endl;

    for (int i = 0; i < length; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // manual shifting of array at position 2
    for (int i = length; i > 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[2] = 3;
    length++;

    for (int i = 0; i < length; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
