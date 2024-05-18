#include <iostream>
using namespace std;
class MyClass {
int i;
  public:
    MyClass(int a) {
     i=a;
     cout<<i;
    }
};

int main() {
  MyClass myObj(10);
}
