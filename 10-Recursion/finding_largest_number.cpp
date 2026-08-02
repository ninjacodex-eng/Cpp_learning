#include <iostream>
using namespace std;
int largest(const int list[],int lowerlimit,int upperlimit){
     int max;
    if (lowerlimit==upperlimit){
        return list[lowerlimit];
    }
    else {
        int max=largest(list,lowerlimit+1,upperlimit);
        if (list[lowerlimit]>=max)
            return list[lowerlimit];
        else 
            return max;
   }
}
int main(){
   int num[4]={6,5,3,2};
    cout<<"Largest numebr is : "<<largest(num,0,3);
    return 0;
};
