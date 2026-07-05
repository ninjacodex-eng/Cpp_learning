#include <iostream>
using namespace std;
int* a(){
    int *p=new int;
    *p=45;
    return p;
}
int main(){
    int *pt=a();
    cout<<"this is it : "<<*pt<<endl;
    return 0;
}
