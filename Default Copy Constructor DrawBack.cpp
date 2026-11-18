#include <iostream>
using namespace std;

class ShallowBox {
public:
    int* data;

    ShallowBox(int val) {
        data = new int(val); // Allocates memory on the heap
    }

    // No custom copy constructor: C++ uses the default shallow copy

    ~ShallowBox() {
        delete data; // Frees heap memory when object is destroyed
    }
};

int main() {
    ShallowBox b1(10);
    ShallowBox b2 = b1; // Shallow copy: b2.data gets the SAME address as b1.data

    *b2.data = 99;      // Modifying b2 secretly overwrites b1's data!

    cout << "b1 data: " << *b1.data << endl; // Outputs: 99
    cout << "b2 data: " << *b2.data << endl; // Outputs: 99

    return 0; 
    // CRASH HERE: b2's destructor deletes the memory, and then b1's destructor
    // tries to delete the exact same memory a second time (double-free error).
}
