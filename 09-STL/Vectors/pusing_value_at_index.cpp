#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<char>u={'t','r','g','a'};
    cout<<"These are the values : ";
    u.insert(u.begin()+3,'y');
    for(char i : u){
        cout<<i<<' ';
    };
    return 0;
};
