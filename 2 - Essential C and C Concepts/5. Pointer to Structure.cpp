#include <iostream>     // For cout, endl
#include <cstdlib>      // For malloc (if using C-style dynamic memory)

using namespace std;

// Define a structure named 'Rectangle'
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // ------------------- 1. STACK ALLOCATION -------------------
    // Create an object 'r' of type Rectangle on the stack
    Rectangle r;

    // Assign values to the structure members
    r.length = 10;
    r.breadth = 5;

    // Access and print members using dot (.) operator
    cout << "STACK Allocation:" << endl;
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;

    // ------------------- 2. POINTER TO STRUCTURE -------------------
    // Declare a pointer 'p' to Rectangle and assign address of 'r'
    Rectangle* p = &r;

    // Access members using arrow (->) operator
    cout << "\nPointer to STACK object:" << endl;
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;

    // ------------------- 3. HEAP ALLOCATION IN C STYLE -------------------
    // Dynamically allocate memory for Rectangle using malloc (C style)
    Rectangle* q = (Rectangle*) malloc(sizeof(Rectangle));

    // Assign values through pointer
    q->length = 15;
    q->breadth = 7;

    // Print values
    cout << "\nHEAP Allocation using malloc (C-style):" << endl;
    cout << "Length: " << q->length << endl;
    cout << "Breadth: " << q->breadth << endl;

    // Free the allocated memory (good practice in C++)
    free(q);

    // ------------------- 4. HEAP ALLOCATION IN C++ STYLE -------------------
    // Dynamically allocate memory for Rectangle using new (C++ style)
    Rectangle* rHeap = new Rectangle;

    // Assign values through pointer
    rHeap->length = 20;
    rHeap->breadth = 10;

    // Print values
    cout << "\nHEAP Allocation using new (C++-style):" << endl;
    cout << "Length: " << rHeap->length << endl;
    cout << "Breadth: " << rHeap->breadth << endl;

    // Deallocate memory using delete (C++ style)
    delete rHeap;

    return 0;
}
