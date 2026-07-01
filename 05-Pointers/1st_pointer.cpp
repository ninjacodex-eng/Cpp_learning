#include <iostream>
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
