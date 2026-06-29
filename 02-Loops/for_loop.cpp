#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter whose table u want : "<<endl;
    cin>>a;
    for (int i=1;i<11;i++) {
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }
    return 0;
}
