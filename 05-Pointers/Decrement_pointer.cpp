#include <iostream>
using namespace std;
int main() {
    int num[4]={1,2,3,4};
    int *p;
    p=&num[3];
    for (int i=4; i>0; i--) {
        cout<<"This is address : "<<p<<endl;
        cout<<"This is value : "<<*p<<endl;
        p--;
    }
    return 0;
}
