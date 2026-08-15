#include <iostream>
#include <string>
using namespace std;
int add(int num=3)
{
  cout<<num+2<<endl;
}
int main()
{
  add(8);
  add();
  return 0;
}

