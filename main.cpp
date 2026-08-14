#include <iostream>

using namespace std;

void after5();

int main() {
    after5();
    return 0;
}

void after5() {
    int age = 24;
    cout << "Age after 5 years is " << age + 5 << endl;
}