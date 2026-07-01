#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a;
    cout<<"enter 6 numbers : ";
    int b[3][2]={     // rows * columns like matrix
    };
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            cin>>b[i][j];
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            cout<<setw(3)<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}
