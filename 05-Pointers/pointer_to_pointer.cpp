#include <iostream>
using namespace  std;
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
