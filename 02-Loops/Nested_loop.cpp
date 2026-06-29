#include <iostream>
#include<iomanip>  //see this is used for setw(?)
using namespace std;
int main() {
    int a;
    cout<<"Enter a no : ";
    cin>>a;
    for (int i=1; i<a; i++) {

        for (int j=1; j<11; j++) {
            cout <<setw(5)<<i*j;
        }
        cout<<endl;
    }
    return 0;
}
