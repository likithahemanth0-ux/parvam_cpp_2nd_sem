#include <iostream>
using namespace std;

int main() {
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int *ptr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> ptr[i];
    }

    cout << "Elements: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    int max = ptr[0];
    for (int i = 1; i < size; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
    }

    cout << "Maximum element = " << max << endl;

    delete[] ptr;
    ptr = nullptr;

    return 0;
}