#include <bits/stdc++.h>
using namespace std;
int main(){
    // input
    int n;
    cout<<"Enter : ";
    cin>>n;
    int arr[n];  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+= 1 ;// tracks the no. sort of tally
    }
    // output 
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        // fetch
        cout<<hash[num]<<endl;
    }
    return 0;
}
