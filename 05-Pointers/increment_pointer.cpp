#include <iostream>

using namespace std;

int main() {
    int num[4] = {1, 2, 3, 4};
    int *p;
    
    p = num;
    
    for (int i = 0; i < 4; i++) {
        cout << "This is address : " << p << endl;
        cout << "This is value : " << *p << endl;
        p++;
    }
    
    return 0;
}
