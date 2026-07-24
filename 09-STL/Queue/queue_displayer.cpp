#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    queue<int>temp;
    q.push(98);
    q.push(47);
    q.push(23);
    temp=q;
    cout<<"This is the queue : ";
    while(!temp.empty()){
            cout<<temp.front()<<" ";
            temp.pop();
    };
            return 0;
};
