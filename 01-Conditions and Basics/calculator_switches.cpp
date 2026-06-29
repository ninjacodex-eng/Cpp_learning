#include <iostream>
using namespace std;
int main() {
    int a,b;
    char x;
    cout<<"Which arithmatic operation u want to do : ";
    cin>>x;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter a number : ";
    cin>>b;
    switch (x) {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case 'X':
            cout<<a*b;
            break;
        case '/':
            if (a/b !=0) {
                cout<<"Denominator cant be 0";
            }else {
                cout<<a/b;
            }
            break;
        default:
            cout<<"Enter a valid input"<<endl;
    }
    return 0;
}
