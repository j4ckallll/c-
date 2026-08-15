#include <iostream>
#include <string>
using namespace std;

int add(string greet, int num = 3)
{
    cout << greet << " " << num + 2 << endl;
    return num + 2;
}

int main()
{
    add("hi", 8);
    add("hello");
    
    return 0;
}