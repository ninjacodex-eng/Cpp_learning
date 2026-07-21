#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){
    vector<int>num={5,4,2,6};
    sort(num.begin(),num.end());
    cout<<"This is ordered set : ";
    for(int n:num){
        cout<<n<<setw(2)<<""; // if u give space in these inverted commas u dont need to add iomanip then no need for setw().
    }
    return 0;
};
