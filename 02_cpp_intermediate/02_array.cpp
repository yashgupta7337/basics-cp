/*
Arrays:
- Collection of elements of the same type stored in contiguous memory locations.
- Fixed size (size must be known at compile time).
- Elements can be accessed using an index (0-based).
- Useful for storing multiple values of the same type.
- Syntax:
    type arrayName[arraySize];

- Accessing elements: arr[index] (index starts from 0)
- Example:
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0]; // Outputs: 1
*/
# include <iostream>
using namespace std;

void array_example() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "First element: " << arr[0] << endl; // Outputs: 1
    cout << "Second element: " << arr[1] << endl; // Outputs: 2

    // Looping through the array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void array_input() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cout << "Enter number for index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Your array is: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    cout << "Array Example:" << endl;
    array_example();

    cout << "Array Input Example" << endl;
    array_input();

    return 0;
}