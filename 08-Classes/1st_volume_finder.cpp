#include <iostream>
using namespace std;
class Box
{
    public:
    double len;
    double bre;
    double hei;
};
int main(){
    Box box1;
    Box box2;
    double vol=0.0;
    cout<<"Enter the dimensions for 1st box (length,breadth,height):";
    cin>>box1.len>>box1.bre>>box1.hei;
        cout<<"Enter the dimensions for 2nd box (length,breadth,height):";
    cin>>box2.len>>box2.bre>>box2.hei;
    vol=box1.len * box1.bre * box1.hei;
    cout<<"Vol of 1st box is : "<<vol<<endl;
    vol=box2.len * box2.bre * box2.hei;
    cout<<"Vol of 2nd box is : "<<vol<<endl;
    return 0;
}
