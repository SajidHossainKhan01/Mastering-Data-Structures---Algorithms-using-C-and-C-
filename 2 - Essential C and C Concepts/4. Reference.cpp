// reference_demo.cpp
// Demonstrates how references work in C++
// Prepared for practice and competitive programming use

#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare a normal variable
    int a = 10;

    // Step 2: Create a reference to variable a
    // Syntax: <data_type>& <ref_name> = <existing_variable>;
    int &r = a;

    // r is now just another name (alias) for a.
    // Any changes to r will affect a, and vice versa.

    cout << "Initially:" << endl;
    cout << "a = " << a << endl;   // Output: 10
    cout << "r = " << r << endl;   // Output: 10

    // Step 3: Modify the value using the reference
    r = 25;  // This also changes a, because r refers to a

    cout << "\nAfter modifying r to 25:" << endl;
    cout << "a = " << a << endl;   // Output: 25
    cout << "r = " << r << endl;   // Output: 25

    // Step 4: Create a new variable b
    int b = 30;

    // Step 5: Assign b to r
    // This will NOT make r refer to b.
    // It will simply copy the value of b into a (which r refers to)
    r = b;

    cout << "\nAfter assigning b (=30) to r:" << endl;
    cout << "a = " << a << endl;   // Output: 30
    cout << "r = " << r << endl;   // Output: 30
    cout << "b = " << b << endl;   // Output: 30

    // Step 6: Confirm r is still referring to a, not b
    b = 100;
    cout << "\nAfter changing b to 100:" << endl;
    cout << "a = " << a << endl;   // Still 30
    cout << "r = " << r << endl;   // Still 30
    cout << "b = " << b << endl;   // Now 100

    // Final Notes:
    // - Reference must be initialized at the time of declaration.
    // - Reference cannot be changed to refer to another variable.
    // - Reference is not a pointer, but acts like an alias.
    // - Useful for function arguments, improving performance, and cleaner syntax.

    return 0;
}
