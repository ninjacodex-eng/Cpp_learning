# C++ Programming Notes

---

## Basic Syntax

```cpp
#include <iostream>

using namespace std;

int main(){

cout<<"hi" <<endl;

}
Input Syntax
Note —> we use >> in cin and << in cout
Typically cin = scan and cout = print

C++
#include <iostream>
using namespace std;

int main() {
int a;
cout << "enter pls : " << endl;
cin >> a;
cout << "the number u entered is : " << a;
return 0;
}
Data Types
float _ = ….

var _=…..

int _=…..

bool _=….

double _=… (for pi i.e multiple decimal places)

_ ⇒ refers to variable name.

Operators
Wont discuss it much as i have dont it in C concepts are same .

C++
#include <iostream>
using namespace std;

int main() {
int a, b;
cout << "Enter 2 numbers : ";
cin >> a;
cin >> b;

cout << "Addition is : " << a + b;

return 0;
}
AND,OR,NOT GATES
C++
#include <iostream>
using namespace std;
int main() {
    int a=6;
    int b=4;
    cout<<"a && b is "<<(a && b)<<endl;// AND
    cout<<"a || b is "<<(a || b)<<endl;// OR
    cout<<"!b is "<< (!b)<<endl;// NOT
    cout << "a ^ b is " << (a ^ b) << endl;//XOR
    cout << "~(a) is " << ~(a);// Complement
    return 0;
}
    cout << "~(a) is " << ~(a);// Complement
    return 0;
}
