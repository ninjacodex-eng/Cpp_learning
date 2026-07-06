                                                                              C++ Programming 

#include <iostream>
using namespace std;
int main(){
cout<<"hi" <<endl;
}
NOTE —> here u have to write (<<) instead of ( , ) in cout.eg ⇒C++cout<<"addition is "<<a+b;
Input Syntaxeg —>C++cin>>Interger_name
eg—>C++#include <iostream>

using namespace std;
int main() {

int a;

cout << "enter pls : " << endl;

cin >> a;

cout << "the number u entered is : " << a;

return 0;

}
note —> we use >> in cin and << in couttypically cin = scanand cout = printData Typesfloat _ = ….var _=…..int _=…..bool _=….double _=…(for pi i.e multiple decimal places)_ ⇒ refers to variable name.Operatorswont discuss it much as i have dont it in C concepts are same .eg—>C++#include <iostream>
using namespace std;

int main() {
int a, b;
cout << "Enter 2 numbers : ";
cin >> a;
cin >> b;

cout << "Addition is : " << a + b;

return 0;
}
AND,OR,NOT GATESeg—>C++#include <iostream>
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
these are also called bitwise operators….LoopsI wont cover anything here refer my code and c notes.NOTE —> but this is imp.C++#include <iostream>

#include <iomanip>
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
HERE WE USED IOMANIP FOR setw() usage.Pointersnow dont say i didnt cover all points in between well see my C notes they are basically same i hope u know this .A pointer is a variable whose value is the address of another variable.eg—>C++#include <iostream>

using namespace std;

int main() {

int a=19;

int *p;

p=&a;

cout<<"This is a : "<<a<<endl;

cout<<"This is p's value : "<<p<<endl;

cout<<"This is *p : "<<*p<<endl;

return 0;

}
Note ⇒ p (pointer variable) = &(argument) a(orignal variable)C++ Pointer ConceptDescriptionNull pointersPointers with a value of zero (or nullptr), commonly used to indicate “no valid address.”Pointer arithmeticArithmetic you can perform on pointers, such as ++, --, +, and - (typically for moving through arrays).Pointers vs arraysPointers and arrays are closely related, and array names can often be used like pointers in expressions.Array of pointersAn array whose elements are pointers.Pointer to pointerA pointer that stores the address of another pointer.NULL pointereg—>C++#include <iostream>

using namespace std;

int main() {

int *p=NULL;

cout<<"This is p : "<<p<<endl;

return 0;

}
Note ⇒ dont try to do cout<<"this is *p"<< p<<endl; this will print nothing as p is 0.Incrementing a PointerWe prefer using a pointer in our program instead of an array because the variable pointer can be incremented.eg—>C++#include <iostream>
using namespace std;
int main() {

int num[4] = {1, 2, 3, 4};

int *p;
p = num;

for (int i = 0; i < 4; i++) {
    cout << "This is address : " << p << endl;
    cout << "This is value : " << *p << endl;
    p++;
}

return 0;
}
here we can also use p = &num[0] , its upto us.We used p++ coz it’s a pointer arithmetic, and it's the standard way to navigate through contiguous memory like arrays.Decrement pointeras the name suggests opposide of increment pointer.eg —>C++#include <iostream>
using namespace std;
int main() {
    int num[4]={1,2,3,4};
    int *p;
    p=&num[3];
    for (int i=4; i>0; i--) {
        cout<<"This is address : "<<p<<endl;
        cout<<"This is value : "<<*p<<endl;
        p--;
    }
    return 0;
}
here u have to put index position of 3 regardless and also & …..SPECIAL CASEC++#include<iostream>
using namespace std;
const char a=3;
int main() {
    char*num[a]={"Viego","Master Yi","Belveth"};
    for(char i=0; i<a; i++) {
        cout<<num[i]<<endl;
    }
    return 0;
}
here we dont need to add any int *p(pointer) thing we used char since we didnt used pointer as in int *p we have to cout(print) it as num[i].note ⇒ till now we were doing array to pointer i.e pointer was taking adress of pointer .but now we will take adress from pointer to pointer…POINTER TO POINTEReg ⇒C++#include<iostream>
using namespace std;
int main() {
    int a=10;
    int *p;
    int **pt;
    p=&a;
    pt=&p;
    cout<<"This is value of  a : "<<a<<endl;
    cout<<"This is value of  *p : "<<*p<<endl;
    cout<<"This is value of  **p : "<<**pt<<endl;
    return 0;
}
POINTER TO FUNCTIONeg ⇒C++#include <iostream>

using namespace std;

double getavg(int *arr, int size);

int main() {

cout << "Enter 4 no.'s : ";

int num[4] = {};
for(int i = 0; i < 4; i++) {
    // FIXED: Using 'i' to place inputs into indices 0, 1, 2, and 3
    cin >> num[i];
}

double avg;
avg = getavg(num, 4);
cout << avg << endl;

return 0;
}

double getavg(int *arr, int size) {

int sum = 0;

double avg;
for(int i = 0; i < size; i++) {

// FIXED: Using 'i' to add the value at the current index to the sum

// Note: sum += arr[i] is exactly the same as sum = sum + arr[i]

sum += arr[i];

}
avg = (double)sum / size;

return avg;

}
so here we used for loops again in sum+= one because otherwise ill have to write arr[1]+... till arr[4]Note ⇒C++int *p=nullptr ;(this means it’s pointing at ntng)
*p=78;
