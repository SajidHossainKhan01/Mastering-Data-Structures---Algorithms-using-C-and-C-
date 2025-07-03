// ArrayBasics.cpp
// Demonstrates basic array operations in C++ with detailed comments
// Suitable for learning, revision, and competitive programming

#include <iostream>     // For cout and cin (C++ I/O)
#include <cstdio>       // For printf (C-style I/O)
using namespace std;

int main() {
    // 1. Array declaration and assignment
    int a[5]; // Declare an integer array of size 5

    // Assign values using index
    a[0] = 12;
    a[1] = 15;
    a[2] = 25;

    // Print size of array (each int is 4 bytes, 5 elements = 20 bytes)
    cout << "Size of array a: " << sizeof(a) << endl;

    // Access and print elements using index
    cout << "a[1] = " << a[1] << endl;

    // Using printf (C-style I/O)
    printf("a[2] = %d\n", a[2]);

    // 2. Array initialization at declaration
    int b[] = {2, 4, 6, 8, 10}; // Size inferred from number of elements
    cout << "Size of array b: " << sizeof(b) << endl;

    // 3. Partial initialization, rest become 0
    int c[10] = {2, 4, 6, 8, 10, 12}; // Remaining 4 elements become 0

    // 4. Initialize all elements to 0
    int d[10] = {0}; // All 10 elements set to 0

    // 5. Printing all elements using for loop
    cout << "Elements of array d: ";
    for (int i = 0; i < 10; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    // 6. Range-based for loop (C++11 and later)
    cout << "Elements of array c using range-based loop: ";
    for (int x : c) {
        cout << x << " ";
    }
    cout << endl;

    // 7. Variable Length Array (VLA - supported in C, partially in C++)
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // VLA (compiler dependent; works in GCC/Clang but not in standard C++)
    int e[n]; // Declares an array of size n

    // Assign values manually or via loop
    e[0] = 2;
    for (int i = 1; i < n; i++) {
        e[i] = 0; // Uninitialized values are garbage by default
    }

    // Print VLA values
    cout << "Elements of array e (VLA): ";
    for (int i = 0; i < n; i++) {
        cout << e[i] << " ";
    }
    cout << endl;

    return 0;
}
