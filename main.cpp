#include <iostream>
#include <string>

using namespace std;

class student {
    public:
        int roll_no;
        string name;
};

int main() {

    student jishnu;
    jishnu.roll_no = 1;
    jishnu.name = "jishnu";

    student vishnu;
    vishnu.roll_no = 2;
    vishnu.name = "vishnu";

    cout<<jishnu.name<<endl;

    return 0;
}