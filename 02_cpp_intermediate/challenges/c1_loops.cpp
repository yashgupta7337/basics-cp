/*
Challenge 1: Factorial of a Number
- Write a program to calculate the factorial of a given number.

Challenge 2: Find the largest Element in an Array
- Write a program to find the largest element in an array of integers.

Challenge 3: Unique Pairs from an Array
- Write a program to print all unique pairs of elements from an array.
*/
# include <iostream>
# include <climits>
# include <set>
using namespace std;

void func1() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result=1;
    for(int i=1;i<=n;i++) result *= i;
    cout << "Factorial of " << n << " is " << result << "\n";
}

void func2() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array's numbers: ";
    for(int i=0;i<n;i++) cin >> arr[i];
    
    cout << "Array: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    int result = INT_MIN;
    for(int i=0;i<n;i++)
        result=max(result, arr[i]);
    cout << "Largest Number: " << result << "\n";
}

void func3() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array's numbers: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Array: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << "\n";

    set<pair<int, int>> up;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            up.insert({arr[i], arr[j]});
        }
    }
    cout << "Unique pairs are: \n";
    for(auto us: up)
        cout << "(" << us.first << ", " << us.second << ")\n";
}

int main() {
    func1();
    func2();
    func3();
    return 0;
}