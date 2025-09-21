/*
Condition & Relational Operators
- Used to compare two values.
- Return boolean values (true or false).
- Condition Operators:
    - Equal to: == (e.g., a == b is true if a equals b)
    - Not equal to: != (e.g., a != b is true if a does not equal b)
- Relational Operators:
    - Greater than: > (e.g., a > b is true if a is greater than b)
    - Less than: < (e.g., a < b is true if a is less than b)
    - Greater than or equal to: >= (e.g., a >= b is true if a is greater than or equal to b)
    - Less than or equal to: <= (e.g., a <= b is true if a is less than or equal to b)

Logical Operators
- Used to combine multiple boolean expressions.
- Return boolean values (true or false).
- Examples:
    - Logical AND: && (e.g., expr1 && expr2 is true if both expr1 and expr2 are true)
    - Logical OR: || (e.g., expr1 || expr2 is true if at least one of expr1 or expr2 is true)
    - Logical NOT: ! (e.g., !expr is true if expr is false)

Condition Statements
- Used to execute different blocks of code based on conditions.
- Examples:
    - if statement: Executes a block of code if a specified condition is true.
    - if-else statement: Executes one block of code if a condition is true, and another block if it is false.
    - else-if ladder: Allows checking multiple conditions in sequence.
    - switch statement: Allows multi-way branching based on the value of a variable.
*/
#include <iostream>
using namespace std;

void condition_statements_demo() {
    int a = 10, b = 20;

    // if statement
    if (a < b) {
        cout << "a is less than b" << endl;
    }

    // if-else statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

    // else-if ladder
    if (a == b) {
        cout << "a is equal to b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is greater than b" << endl;
    }

    // switch statement
    int choice = 2;
    switch (choice) {
        case 1:
            cout << "Choice is 1" << endl;
            break;
        case 2:
            cout << "Choice is 2" << endl;
            break;
        case 3:
            cout << "Choice is 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

int main() {
    condition_statements_demo();
    return 0;
}