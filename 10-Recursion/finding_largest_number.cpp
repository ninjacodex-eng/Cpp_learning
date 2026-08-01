 #include<iostream>
using namespace std;
int largest(const int list[],int lowerindex,int upperindex)
{
    int max;
        if (lowerindex==upperindex)
        {
                return list[lowerindex];
        }
    else
        {
            max=largest(list,lowerindex+1,upperindex);
            if (list[lowerindex]>=max)
                return list[lowerindex];
        else    
             return max;
    };
};
int main(){
    int num[4]={6,4,3,2};
    cout<<"The largest number is : "<<largest(num,0,3);
    return 0;
};
