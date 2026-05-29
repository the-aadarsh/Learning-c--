#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Empty vector (no elements)
    vector<int> vec1; // size = 0

    // 2. Vector with size only
    vector<int> vec2(5); // size = 5, all elements initialized to 0

    // 3. Vector with size and value
    vector<int> vec3(5, 10); // size = 5, all elements initialized to 10

    // 4. Initializer list (direct values)
    vector<int> vec4 = {10, 20, 30, 40, 50};

    // 5. Copy initialization
    vector<int> vec5(vec4); // copy of vec4

    // 6. Using push_back (dynamic insertion)
    vector<int> vec6;
    vec6.push_back(1);
    vec6.push_back(2);
    vec6.push_back(3); // vec6 = {1,2,3}

    // Printing all vectors
    cout << "vec1 (empty):";
    for (int val : vec1) cout << " " << val;
    cout << endl;

    cout << "vec2 (size 5, default 0):";
    for (int val : vec2) cout << " " << val;
    cout << endl;

    cout << "vec3 (size 5, value 10):";
    for (int val : vec3) cout << " " << val;
    cout << endl;

    cout << "vec4 (initializer list):";
    for (int val : vec4) cout << " " << val;
    cout << endl;

    cout << "vec5 (copy of vec4):";
    for (int val : vec5) cout << " " << val;
    cout << endl;

    cout << "vec6 (push_back):";
    for (int val : vec6) cout << " " << val;
    cout << endl;

    // Modify values using reference
    cout << "vec3 after multiplying by 2:";
    for (int &value : vec3) {
        value = value * 2; // modifies original vector
        cout << " " << value;
    }
    cout << endl;

    return 0;
}
