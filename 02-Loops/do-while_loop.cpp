#include <iostream>
using namespace std;
int main() {
    int a;
    int i=1;
    cout<<"Enter whose table u want : "<<endl;
    cin>>a;
    do {
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
        i++;
    }
    while (i<11);
    return 0;
}
