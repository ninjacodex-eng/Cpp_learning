#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,3,2,7,5,9};
    v.erase(v.begin()+4);
    cout<<"These are final values : ";
    for(int i : v){
                cout<<i<<"  ";
    };
    return 0;
};
