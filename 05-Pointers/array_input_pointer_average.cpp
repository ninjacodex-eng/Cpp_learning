#include <iostream>
using namespace std;
double getavg(int *arr,int size);
int main(){
    int num[3]={};
    double avg;
    cout<<"Enter 3 numbers : ";
    for(int i=0; i<3;i++){
       cin>>num[i];
    }
    avg=getavg(num,3);
    cout<<"This is avg : "<<avg<<endl;
    return 0;
}
double getavg(int *arr,int size){
    int sum=0;
    double avg;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    avg=(double)sum/size;
    return avg;
}
