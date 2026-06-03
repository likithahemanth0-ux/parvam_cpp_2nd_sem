#include <iostream>
using namespace std;

// --------------------------------------------------
// POINTERS AND ARRAYS
// Definition: Array name acts as pointer to first element.
// --------------------------------------------------

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int* ptr = arr;  // arr is equivalent to &arr[0]
    
    cout << "Array traversal using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *ptr << " (address: " << ptr << ")" << endl;
        ptr++;  // Move to next element (advances by sizeof(int) bytes)
    }
    
    return 0;
}