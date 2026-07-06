# C++ Programming Notes

## Basic Input and Output
In C++, we use `cout` for printing output and `cin` for reading input. 
* **Note:** You must use `<<` instead of `,` with `cout`. (e.g., `cout << "addition is " << a + b;`)
* Typically, `cin` = `scanf` (from C) and `cout` = `printf` (from C). We use `>>` in `cin` and `<<` in `cout`.

### Simple Output
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "hi" << endl;
    return 0;
}
