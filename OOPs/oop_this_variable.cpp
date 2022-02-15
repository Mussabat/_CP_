#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student {
  public:
    string name;

    student(string name) {   /// class er variaable er name local function er obj;
    this->name = name;    /// confused jate na hoy j kon ta ki tai class er tar age this operator
    }

    void dispaly() {
        cout << name << '\n';
    }

};

int main() {
    student obj("Nafisa");
    obj.dispaly();
}

