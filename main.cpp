#include <iostream>
using namespace std;

int fact(int n)
{
    cout << "n=" << n << endl;
    if (n == 0)
    {
        cout << "n value is 0" << endl;
        return 1;
    }
    cout << "calling " << n << "* fact(" << n - 1 << ")" << endl;
    return n * fact(n - 1);
}

int main()
{
    cout << fact(5) << endl;
    return 0;
}