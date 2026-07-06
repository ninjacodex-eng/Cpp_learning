C++ Programming NotesBasic Input and OutputIn C++, we use cout for printing output and cin for reading input.Note: You must use << instead of , with cout. (e.g., cout << "addition is " << a + b;)Typically, cin = scanf (from C) and cout = printf (from C). We use >> in cin and << in cout.Simple OutputC++#include <iostream>
using namespace std;

int main() {
    cout << "hi" << endl;
    return 0;
}
Input SyntaxC++#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "enter pls : " << endl;
    cin >> a;
    cout << "the number u entered is : " << a << endl;
    return 0;
}
Data TypesCommon data types in C++ include:float var_name = ... (decimal numbers)int var_name = ... (integers)bool var_name = ... (true/false)double var_name = ... (for multiple decimal places, like Pi)Operators & Logic Gates (Bitwise)The core concepts are the same as in C.C++#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 4;
    
    // Arithmetic Operator
    cout << "Addition is : " << a + b << endl;
    
    // Bitwise / Logic Operators
    cout << "a && b is " << (a && b) << endl; // AND
    cout << "a || b is " << (a || b) << endl; // OR
    cout << "!b is " << (!b) << endl;         // NOT
    cout << "a ^ b is " << (a ^ b) << endl;   // XOR
    cout << "~(a) is " << ~(a) << endl;       // Complement
    
    return 0;
}
Loops and iomanipLoops function exactly like they do in C. However, formatting output often requires the <iomanip> library, especially for functions like setw() which sets a fixed width for output.C++#include <iostream>
#include <iomanip> // Required for setw()
using namespace std;

int main() {
    int a;
    cout << "Enter a no : ";
    cin >> a; 
    
    for (int i = 1; i < a; i++) { 
        for (int j = 1; j < 11; j++) { 
            cout << setw(5) << i * j; 
        } 
        cout << endl; 
    }
    
    return 0; 
}
PointersA pointer is a variable whose value is the exact memory address of another variable.C++#include <iostream>
using namespace std;

int main() {
    int a = 19;
    int *p;
    p = &a;
    
    cout << "This is a : " << a << endl;
    cout << "This is p's value (address): " << p << endl;
    cout << "This is *p (dereferenced value): " << *p << endl;
    
    return 0;
}
Pointer ConceptsConceptDescriptionNull pointersPointers with a value of zero (or nullptr), commonly used to indicate “no valid address.”Pointer arithmeticArithmetic performed on pointers (++, --, +, -), typically for moving through arrays.Pointers vs arraysClosely related; array names can often be used like pointers in expressions.Array of pointersAn array whose elements are themselves pointers.Pointer to pointerA pointer that stores the memory address of another pointer.NULL PointerNote: Don't try to cout << *p if p is NULL (0). It will cause an error because it points to nothing.C++#include <iostream>
using namespace std;

int main() {
    int *p = NULL;
    cout << "This is p : " << p << endl;
    return 0;
}
Pointer Arithmetic: IncrementingWe prefer using a pointer in our program instead of an array because a pointer variable can be incremented, which is the standard way to navigate contiguous memory.C++#include <iostream>
using namespace std;

int main() {
    int num[4] = {1, 2, 3, 4};
    int *p; 
    p = num; // equivalent to p = &num[0];
    
    for (int i = 0; i < 4; i++) { 
        cout << "This is address : " << p << endl; 
        cout << "This is value : " << *p << endl; 
        p++; 
    }
    return 0; 
}
Pointer Arithmetic: DecrementingAs the name suggests, this operates in the opposite direction. You set the pointer to the last index and decrement.C++#include <iostream>
using namespace std;

int main() {
    int num[4] = {1, 2, 3, 4};
    int *p; 
    p = &num[3]; 
    
    for (int i = 4; i > 0; i--) { 
        cout << "This is address : " << p << endl; 
        cout << "This is value : " << *p << endl; 
        p--; 
    } 
    return 0; 
}
Special Case: Array of StringsIf we aren't using integer pointers and are dealing with character arrays, we don't strictly need int *p. We can iterate and print directly.C++#include <iostream>
using namespace std;

const int a = 3;

int main() {
    const char* num[a] = {"Viego", "Master Yi", "Belveth"};
    
    for(int i = 0; i < a; i++) {
        cout << num[i] << endl;
    }
    return 0;
}
Pointer to PointerPreviously, the pointer was taking the address of a standard variable. Now, a pointer takes the address of another pointer.C++#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    int **pt;
    
    p = &a;
    pt = &p;
    
    cout << "This is value of a : " << a << endl;
    cout << "This is value of *p : " << *p << endl;
    cout << "This is value of **pt : " << **pt << endl;
    
    return 0;
}
Pointer to FunctionYou can pass an array to a function as a pointer to calculate values over loops.C++#include <iostream>
using namespace std;

double getavg(int *arr, int size);

int main() {
    cout << "Enter 4 no.'s : ";
    int num[4] = {}; 
    
    // Using 'i' to place inputs into indices 0, 1, 2, and 3 
    for(int i = 0; i < 4; i++) { 
        cin >> num[i]; 
    }
    
    double avg; 
    avg = getavg(num, 4); 
    cout << "Average: " << avg << endl;
    
    return 0; 
}

double getavg(int *arr, int size) {
    int sum = 0;
    double avg; 
    
    for(int i = 0; i < size; i++) {
        // sum += arr[i] is exactly the same as sum = sum + arr[i]
        sum += arr[i];
    } 
    
    avg = (double)sum / size;
    return avg;
}
A Note on nullptrC++int *p = nullptr; // This means it's pointing at absolutely nothing.
*p = 78;   
