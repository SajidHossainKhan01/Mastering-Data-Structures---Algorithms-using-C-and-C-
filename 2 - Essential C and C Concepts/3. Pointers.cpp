
/*
    Title: Practice Pointers in C++ (with C compatibility)
    Description: This program demonstrates various pointer concepts useful for understanding memory,
                 arrays, heap allocation, and pointer arithmetic. It includes both C and C++ methods.
*/

#include <iostream>  // For C++ I/O operations
#include <cstdio>    // For printf (C-style I/O)
#include <cstdlib>   // For malloc and free (C-style memory management)
using namespace std;

// Structure definition for pointer size demonstration
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // ----------- 1. Basic Pointer Declaration and Dereferencing -----------
    int a = 10;         // Declare an integer variable
    int *p = &a;        // Declare a pointer and assign address of 'a'

    cout << "Value of a: " << a << endl;
    cout << "Using pointer *p: " << *p << endl;  // Dereferencing pointer to get value

    // Print address of a using &a and p (both are same)
    printf("Address using &a: %p\n", (void*)&a);
    printf("Address using p: %p\n", (void*)p);

    // ----------- 2. Pointer to Array -----------
    int arr[5] = {2, 4, 6, 8, 10}; // Static array
    p = arr;  // Array name acts as base address

    cout << "\nAccessing array using pointer p:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << p[i] << endl;  // Pointer used like array
    }

    // ----------- 3. Dynamic Memory Allocation (C style using malloc) -----------
    int *heapArrC = (int*) malloc(5 * sizeof(int)); // Allocate memory in heap

    // Initialize elements
    heapArrC[0] = 10; heapArrC[1] = 15;
    heapArrC[2] = 14; heapArrC[3] = 21; heapArrC[4] = 31;

    cout << "\nValues in heap (C-style malloc):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "heapArrC[" << i << "] = " << heapArrC[i] << endl;
    }

    free(heapArrC);  // Deallocate heap memory (C-style)

    // ----------- 4. Dynamic Memory Allocation (C++ style using new) -----------
    int *heapArrCpp = new int[5];  // Allocate heap memory using C++

    // Initialize values
    heapArrCpp[0] = 5; heapArrCpp[1] = 7;
    heapArrCpp[2] = 9; heapArrCpp[3] = 11; heapArrCpp[4] = 13;

    cout << "\nValues in heap (C++-style new):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "heapArrCpp[" << i << "] = " << heapArrCpp[i] << endl;
    }

    delete[] heapArrCpp;  // Deallocate memory (C++-style)

    // ----------- 5. Pointer Size for Various Data Types -----------
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    Rectangle *p5;

    cout << "\nPointer Sizes on This Machine:" << endl;
    cout << "Size of int pointer: " << sizeof(p1) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(p2) << " bytes" << endl;
    cout << "Size of float pointer: " << sizeof(p3) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(p4) << " bytes" << endl;
    cout << "Size of struct pointer: " << sizeof(p5) << " bytes" << endl;

    // Note: Pointer size is typically 8 bytes on 64-bit machines, regardless of data type

    return 0;
}
