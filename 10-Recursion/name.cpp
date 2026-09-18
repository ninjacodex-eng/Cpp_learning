#include <bits/stdc++.h>
using namespace std;
void name(int n){
    if(n==0)
        return 0;
cout<<"charlizard"<<endl;
name(n-1);
}
int main(){
    int n=5;
    name(n);
    return 0;
}
