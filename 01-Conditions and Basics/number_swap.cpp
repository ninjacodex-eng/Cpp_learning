#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout<<"enter a no : ";
    cin>>a;
    cout<<"enter a no : ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a;
    cout<<b;
    return 0;
}
