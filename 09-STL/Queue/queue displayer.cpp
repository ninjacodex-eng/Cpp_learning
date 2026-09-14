#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q({1, 3, 5, 6});
    queue<int> temp;
    temp = q; 
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}
