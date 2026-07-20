#include <iostream>

using namespace std;

class Base {
  public:
    void start() {
        cout << "Welcome to my program" << endl;
    }
};

class App : public Base {
  public:
    void end() {
        cout << "Thanks for using my program" << endl;
    }
};

int main() {
    App ui;
    ui.start();

    int num[5];

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    int* p = nullptr;
    p = num;

    int* &r = p;

    for (int i = 0; i < 5; i++) {
        cout << r[i] << " ";
    }
    cout << endl;

    ui.end();

    return 0;
}
