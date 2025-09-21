/*
INPUT IN C++
- cin is used to take input from the user.
- The syntax is: cin >> variable_name;
- note: cout is << and cin is >>. 
*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // taking input of a and b
    // when entered multiple values, separate them with space or newline
    cout << "You entered: " << a << " and " << b << endl; 
    // displaying the values of a and b
    // for new line, we can also use \n instead of endl
    // endl is used to flush the output buffer and insert a new line character
    // \n is just a new line character but does not flush the output buffer
    // endl is generally slower than \n because of the flushing operation
    return 0;
}