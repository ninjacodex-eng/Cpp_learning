#include <iostream>
using namespace std;
int multiply(int a,int b);
int main() {
     int a,b;
     cout<<"enter a no : ";
     cin>>a;
     cout<<"enter a no : ";
     cin>>b;
     cout<<multiply(a,b);
     return 0;
}
int multiply(int a,int b) {
     return a*b;
}
