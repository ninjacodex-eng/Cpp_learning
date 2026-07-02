#include <iostream>
using namespace std;
const char a=3;
int main() {
    char *num[a]={"Viego","Master Yi","Belveth"};
    for (char i=0; i<a; i++) {
        cout<<num[i]<<endl;
    }
    return 0;
}
