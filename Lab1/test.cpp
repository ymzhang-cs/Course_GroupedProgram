#include <iostream>

using namespace std;

class A {
    // 这是一行注释
    public:
        int something;
};

class B: public A {
    public:
        int something_else;
};

int main() {
    B b;
    b.something = 1;
    return 0;
}