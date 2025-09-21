/*
1. Given someone's age, tell whether they are a child (age < 12),
a teenager (12 <= age < 20), an adult (20 <= age < 60), or a senior citizen (age >= 60).

2. Take input of 3 numbers and print the largest one.
*/
#include <iostream>
#include <climits> // for INT_MIN, INT_MAX

using namespace std;

void func1()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 12)
        cout << "Child\n";
    else if (age < 20)
        cout << "Teenage\n";
    else if (age < 60)
        cout << "Adult\n";
    else
        cout << "Senior Citizen\n";
}

void func2()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Numbers: " << a << ", " << b << " and " << c << endl;
    int max_number = INT_MIN;
    if (a > b) {
        if (a > c) max_number = a;
        else max_number = c;
    } else {
        if (b > c) max_number = b;
        else max_number = c;
    }
    cout << "Max Number is " << max_number << endl;
}

int main()
{
    func1();
    func2();
    return 0;
}