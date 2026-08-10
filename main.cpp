#include <iostream>
#include <string>
using namespace std;

struct
{
    string name;
    int age;
    float cgpa;
} jishnu, vishnu;

int main()
{
    jishnu.name = "jishnu";
    jishnu.age = 18;
    jishnu.cgpa = 9.0f;

    vishnu.name = "vishnu";
    vishnu.age = 23;
    vishnu.cgpa = 9.5f;

    cout << vishnu.cgpa << endl;

    return 0;
}