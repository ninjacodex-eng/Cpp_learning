#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter your marks : ";
    cin>>a;
    if (a>=0 && a<=23) {
        cout<<"U got F"<<endl;
    }
    else if  (a>=24 && a<=60) {
        cout<<"U got a C"<<endl;
    }
    else if (a>=61 && a<65) {
        cout<<"u got a B"<<endl;
    }
    else {
        cout<<"you got A"<<endl;
    }
    return 0;
}
