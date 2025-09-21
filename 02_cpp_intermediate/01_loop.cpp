#include <iostream>
using namespace std;

void for_loop() {
    /*
    syntax:
        for (initialization; condition; increment) {
            // code to be executed
        }
    */
    for (int i = 0; i < 3; i++) {
        cout << "Iteration " << i + 1 << endl;
    }
}

void while_loop() {
    /*
    syntax:
        initialization;
        while (condition) {
            // code to be executed
            // increment / decrement / path to condition without infinite loop
        }   
    */
    int i = 0;
    while (i < 3) {
        cout << "Iteration " << i + 1 << endl;
        i++;
    }
}

void do_while_loop() {
    // Executes at least once
    /*
    syntax:
        initialization;
        do {
            // code to be executed
            // increment / decrement / path to condition without infinite loop
        } while (condition);
    */
    int i = 0;
    do {
        cout << "Iteration " << i + 1 << endl;
        i++;
    } while (i < 3);
}

int main() {
    cout << "For Loop:" << endl;
    for_loop();
    cout << endl;

    cout << "While Loop:" << endl;
    while_loop();
    cout << endl;

    cout << "Do-While Loop:" << endl;
    do_while_loop();
    cout << endl;

    return 0;
}