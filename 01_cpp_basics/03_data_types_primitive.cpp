/*
    C++ BASICS – DATA TYPES
    
Constants in C++
- integer constants: 42, -7
- floating-point constants: 3.14, -0.001
- character constants: 'a', 'Z', '0'
- string constants: "MYP@SSW0RD:/"

Variables in C++
- Named storage locations for data.
- Must be declared with a data type before use.
- syntax: data_type variable_name = value;
- Example:
    - int age = 25;
    - double pi = 3.14;
    - char grade = 'A';
    - bool isStudent = true; 
- Naming rules:
    - Start with a letter or underscore (_)
    - Followed by letters, digits, or underscores
    - Case-sensitive (age, Age, AGE are different)
    - Cannot use reserved keywords (int, return, if, etc.)

What Are Data Types?
- Specify what kind of data a variable can hold.
- Determines how much memory a variable uses.
- Two categories:
    1. Primitive (built-in) data types
    2. Derived / User-defined data types

Primitive Data Types


Type            Size         Description / Range
----------------------------------------------------------
int             4 bytes      Whole numbers, ~ -2e9 to +2e9
long            4 or 8 bytes Larger integers, often same as int on Windows, max 2e9 or 9e18
long long       8 bytes      Very large integers, ~ -9e18 to +9e18
float           4 bytes      Decimal numbers, ~7 digits precision
double          8 bytes      Decimal numbers, ~15 digits precision
long double     10–16 bytes  Higher precision decimal numbers, range and precision vary by system
char            1 byte       Single character, e.g., 'a', 'A', '0'
                             Signed: -128 to 127, Unsigned: 0 to 255
bool            1 byte       true / false
void            0 bytes      Represents no value (used in functions)

*Sizes may vary by system/compiler

Signed vs Unsigned
- Unsigned types can only hold non-negative values, effectively doubling the upper limit.
- Use unsigned when you know values will never be negative (e.g., array indices, sizes).
- Default integer types (int, long, long long) are signed.
- Unsigned are only for Integer types

Derived / User-Defined Data Types
- Arrays, Pointers, References, Functions
- Strings (std::string), Classes / Objects / Structs / Enums

Notes on char
- Characters are stored as numeric codes internally:
    'A' -> 65, '0' -> 48, 'g' -> 103
- char can be signed or unsigned, affecting numeric range
- Use unsigned char for raw bytes (0–255)

Key Tips
- Use long long for very large integers
- Use double for most decimal numbers
- bool should be used for logical flags
- Check sizeof(type) if unsure about memory size
- Use signed vs unsigned based on whether negative values are needed

*/

#include <iostream>
using namespace std;

int main() {
    // INTEGER TYPES
    int a = 10;                // 4 bytes
    long d = 111222;           // 4 or 8 bytes depending on system
    long long e = 23442342332; // 8 bytes, much larger range
    unsigned int ua = 20;     // 4 bytes, only positive values
    int sc_not = 1e9;               // scientific notation for large numbers

    // FLOATING POINT TYPES
    float b = 3.14f;              // 4 bytes, float literal with 'f' suffix -> means single precision
    double c = 3.1415926535;           // 8 bytes, double literal by default -> means double precision
    long double f = 3.141592653589793238l; // 10–16 bytes, extended precision (but system dependent)
    // suffixes: f for float, l for long double, no suffix for double
    // single vs double vs extended precision -> affects accuracy and range

    // CHARACTER TYPE
    char g = 'g';                 // 1 byte
    bool flag = true;             // 1 byte

    // Special Type: void
    // void is used to indicate no value or no type
    // Commonly used in functions that do not return a value
    void* ptr = nullptr; // pointer to void, can point to any type

    // Printing examples
    cout << "Integer a: " << a << endl;
    cout << "Long d: " << d << endl;
    cout << "Long long e: " << e << endl;
    cout << "Unsigned int ua: " << ua << endl;
    cout << "Scientific notation int sc_not = 1e9: " << sc_not << endl;
    cout << "Float b: " << b << endl;
    cout << "Double c: " << c << endl;
    cout << "Long double f: " << f << endl;
    cout << "Char g: " << g << " (ASCII: " << int(g) << ")" << endl;
    cout << "Bool flag: " << flag << endl;

    return 0;
}
