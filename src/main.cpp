#include <stdio.h>

class MyClass {
public:
    MyClass() { printf("Default constructor\n"); }
    MyClass(MyClass& b) { printf("Copy constructor\n"); }
    MyClass(MyClass&& c) { printf("Move constructor\n"); }
    ~MyClass() { printf("Destructor\n"); }
};

MyClass func() {
    MyClass t;
    return t;
}

int main() {
    MyClass test(func());
    return 0;
}