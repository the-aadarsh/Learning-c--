#include <iostream>

using namespace std;

int main() {

    int count = 10;
    cout << "Counting down from 10 to 1:" << endl;
    while (count >= 1) {
        cout << count << " ";
        count--;
    }
    cout << endl;

    return 0;
}
