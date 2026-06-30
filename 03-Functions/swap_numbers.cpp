#include <iostream>
using namespace std;
int swap(int a,int b);
int main() {
     int a,b;
     cout<<"Enter 2 number : ";
     cin>>a>>b;
     swap(a,b);
     return 0;
}
int swap(int a,int b) {
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout<<a<<b<<endl;
}
