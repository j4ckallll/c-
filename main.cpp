#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 6;

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    float div = float(a) / b;
    int rem = a % b;

    cout << "sum :" << sum << endl;
    cout << "diff :" << diff << endl;
    cout << "product :" << product << endl;
    cout << "div :" << div << endl;
    cout << "rem :" << rem << endl;

    return 0;
}