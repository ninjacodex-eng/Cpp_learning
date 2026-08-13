#include <bits/stdc++.h>
using namespace std;
void name(int n){
    if(n==0)
        return;
cout<<"charlizard"<<endl;
name(n-1);
}
int main(){
    int n=5;
    name(n);
    return 0;
}
