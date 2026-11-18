#include <iostream>
using namespace std;

class DeepBox {
public:
    int* data;

    DeepBox(int val) {
        data = new int(val);
    }

    // Custom copy constructor for a DEEP COPY
    DeepBox(const DeepBox& other) {
        data = new int(*other.data); // Allocates NEW memory and copies the value
    }

    ~DeepBox() {
        delete data; // Safe: each object deletes its own separate memory
    }
};

int main() {
    DeepBox b1(10);
    DeepBox b2 = b1; // Deep copy: b2.data points to a brand-new address

    *b2.data = 99;   // Modifying b2 leaves b1 completely untouched

    cout << "b1 data: " << *b1.data << endl; // Outputs: 10
    cout << "b2 data: " << *b2.data << endl; // Outputs: 99

    return 0; // Runs cleanly with no memory errors
}
