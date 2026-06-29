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