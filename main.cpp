#include <iostream>
using namespace std;

int main() {
    int age = 24;

    int* ptr;
    ptr = new int;

    *ptr = 24;

    cout << *ptr;

    delete ptr;

    return 0;
}