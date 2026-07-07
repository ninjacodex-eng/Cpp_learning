#include <iostream>
using namespace std;
int main(){
    int i=68;
    int r=54;
    int *p;
    int& a=i;
    p= &r;
   
    cout<<"this is value of *p : "<<*p<<endl;
    cout<<"this is the value : "<<a<<endl;
    return 0;
}
