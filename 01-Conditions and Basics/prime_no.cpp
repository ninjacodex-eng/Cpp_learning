#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a no : ";
    cin>>a;
    if (a%a==0) {
        cout<<"This is a composite no"<<endl;
    }else if (a%1==0) {
        cout<<"This is a composite no"<<endl;
    }
    else {
        cout<<"This is prime no"<<endl;
    }
    return 0;
}
