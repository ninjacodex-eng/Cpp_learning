#include <iostream>
using namespace std;
int main(){
    int *p=nullptr;
    p=new int;
    *p=34;
    cout<<*p<<endl;
    return 0;
}
