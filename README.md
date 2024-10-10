# Exception Handling in C++

## Aim
To understand and implement exception handling in C++ to manage runtime errors effectively.

## Theory
Exception handling is a mechanism in C++ to handle runtime errors, ensuring the normal flow of the program is maintained. It involves three keywords: `try`, `throw`, and `catch`.

### Key Concepts
1. **try**: A block of code that might throw an exception.
2. **throw**: Used to throw an exception when a problem is detected.
3. **catch**: A block of code that handles the exception thrown by the `throw` statement.

### Advantages of Exception Handling
- **Separation of Error Handling Code from Normal Code**: Makes the code cleaner and easier to maintain.
- **Propagating Errors Up the Call Stack**: Allows higher-level functions to handle errors.
- **Grouping Error Types**: Different types of errors can be handled by different `catch` blocks.

## Syntax
```cpp
try {
    // Code that might throw an exception
    throw exception; // Throwing an exception
} catch (type exception) {
    // Code to handle the exception
}
```
## Algorithm for Exception Handling

1. Start

2. Initialize the Program
   - Begin the program by including necessary libraries
#include <iostream>
using namespace std;

3. Input Values
    - Prompt the user to enter two numbers
    - Read the input values
int main() {
    float n1, n2, ans;
    cout << "Enter the numbers 1 and 2: ";
    cin >> n1 >> n2;

     4. Try Block
        - Start a try block to test for exceptions
    try {
         - Check if the second number (denominator) is zero
        if (n2 == 0) {
         - If zero, throw an exception using the throw keyword
            throw n2;
        } else {
        - If not zero, perform the division and display the result
            ans = n1 / n2;
            cout << "Answer is: " << ans << endl;
        }
    }
     5. Catch Block
          - Start a catch block to handle the exception
    catch (float num) {
          - Display an error message indicating division by zero
        cout << "\nERROR: Division by " << num << endl;
    }

     6. End Program
        - Return 0 to indicate successful execution of the program
       - End the main() function
    return 0;
}
