#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(45);
    pq.push(90);
    pq.push(34);
    cout<<"Elements in max heap : ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
};
