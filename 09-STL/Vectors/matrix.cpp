#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v ={  
    {5,4,2},
    {6,2,5},
    {8,4,2}
    };
    for(int i=0; i<v.size();i++){
            for(int j=0; j<v[i].size(); j++ ){
                 cout<<v[i][j]<<"  ";
            };
         cout<<endl;
    };
    return 0;
};
