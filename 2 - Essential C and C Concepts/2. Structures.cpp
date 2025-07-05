#include <iostream>     // For input/output in C++ (cin, cout)
using namespace std;

// ✅ Structure Definition
// Defining a structure named 'Rectangle' with two int members
struct Rectangle {
    int length;     // Stores the length of the rectangle
    int breadth;    // Stores the breadth of the rectangle
    // char x;      // Uncomment to observe padding effect
};

// ✅ Global Declaration (Uncomment if needed globally)
// struct Rectangle r1, r2, r3;

int main() {
    // ✅ Local Structure Variable Declaration
    struct Rectangle r1;  // Declares a variable of type 'Rectangle'

    // ✅ Initialization of Structure Members
    r1.length = 10;
    r1.breadth = 5;

    // ✅ Accessing Structure Members
    cout << "Initial Values:" << endl;
    cout << "Length: " << r1.length << endl;
    cout << "Breadth: " << r1.breadth << endl;

    // ✅ Modifying Structure Members
    r1.length = 15;
    r1.breadth = 7;

    cout << "\nAfter Modification:" << endl;
    cout << "Length: " << r1.length << endl;
    cout << "Breadth: " << r1.breadth << endl;

    // ✅ Finding Size of Structure
    // Size depends on member data types and padding
    cout << "\nSize of structure (bytes): " << sizeof(r1) << endl;

    /*
        ⚠️ Padding Explanation:
        If you add a `char x;` to the structure, 
        the size may increase due to memory alignment (padding).
        For example:
        struct Rectangle {
            int length;   // 4 bytes
            int breadth;  // 4 bytes
            char x;       // 1 byte, but takes 4 due to padding
        };
        So total = 4 + 4 + 4 = 12 bytes (not 9)
    */

    return 0;
}