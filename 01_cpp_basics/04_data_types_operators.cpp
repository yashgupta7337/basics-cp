/*

Unary Operators in C++
- Operate on a single operand.
- Examples:
    - + (e.g., +a gives the value of a)
    - Increment: ++ (e.g., ++a increases a by 1)
    - Decrement: -- (e.g., --b decreases b by 1)
    - Negation: - (e.g., -x gives the negative of x)
    - Logical NOT: ! (e.g., !true is false, !false is true)
- prefix vs postfix:
    - Prefix (++a): Increment a, then use the new value of a.
    - Postfix (a++): Use the current value of a, then increment a.
    - Example:
        int a = 5;
        int b = ++a; // a becomes 6, b is 6 in memory immediately
        int c = a++; // c is 6, then a becomes 7 after this line
    - Use prefix when the incremented value is needed immediately.

Arithmetic Operators -> BODMAS
- Operate on numeric values.
- Examples: +, -, *, /, %
*/
#include <iostream>
using namespace std;

void unary_demo() {
    cout << "Unary Operators Demo:" << endl;
    int a = 5;
    cout << "Initial a: " << a << endl; // 5
    
    int b = ++a; // Prefix increment: a becomes 6, b is 6
    cout << "After prefix ++a, a: " << a << ", b: " << b << endl; // a=6, b=6
    
    int c = a++; // Postfix increment: c is 6, then a becomes 7
    cout << "After postfix a++, a: " << a << ", c: " << c << endl; // a=7, c=6
    
    bool flag = true;
    cout << "Logical NOT of flag: " << !flag << endl << endl; // false (0)
}

void implicit_explicit_demo() {
    cout << "Implicit and Explicit Demo:" << endl;

    int x = 10;
    double y = 3.5;
    
    // Implicit conversion: int to double
    double result1 = x + y; // x is converted to double
    cout << "Implicit conversion (int to double): " << result1 << endl; // 13.5
    
    // Explicit conversion (casting)
    int a = 5, b = 2;
    int result_1 = a / b; // integer division, result is 2
    int result_2 = (double)a / b; // explicit cast to double, result is 2.5
    cout << "Integer division a/b: " << result_1 << endl; // 2
    cout << "Explicit cast (double)a/b: " << result_2 << endl; // 2.5
}

int main() {
    unary_demo();
    implicit_explicit_demo();
    return 0;
}