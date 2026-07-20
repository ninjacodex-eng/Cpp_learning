#include <iostream>
#include <string>

using namespace std;

struct bank {
  private:
    string hname;
    double hbalance;
    
  public:
    bank(string name, double balance) : hname(name), hbalance(balance) {}
    
    void out() {
        cout << "this is the balance : " << hbalance << endl; 
    }
};

int main() {
    bank b1("simba", 50000);
    b1.out();
    return 0;
}
