#include <bits/stdc++.h>
using namespace std;
int main(){
  deque<int>d;
  d.emplace_back(76);
  d.emplace_back(89);
  d.emplace_back(21);
  for(int i: d){
      cout<<i<<" ";
  };
  return 0;
};
