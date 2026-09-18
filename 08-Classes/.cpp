#include <bits/stdc++.h>
using namespace std;
class animal {
    string ex;
public:
    animal(string s) : ex(s) {}
    void some() {
        cout << "let it be a example" << endl;
    }
};
class dog : public animal {
    string exs;
public:
    dog(string sl, string sw) : animal(sl), exs(sw) {}
    void display() {
        cout << "dry run successful" << endl;
    }
};
int main() {
    animal a1("Entry");
    dog d1("Exit", "3some");
    a1.some();
    d1.display();
    return 0;
}
