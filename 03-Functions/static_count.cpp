#include <iostream>
using namespace std;
void count();
int main() {
    count();
    count();
    count();
    count();
    return 0;
}
void count() {
    static int a=0;
    a++;
    cout<<a<<endl;
}
