#include <iostream>
using namespace std;
const int a=4;
int main() {
    int num[a]={1,2,5};
    int *p;
    p=num;
    for (int i=1; i<a; i++) {
        cout<<"Value is : "<<*p<<endl;
        p++;
    }
    return 0;
}
