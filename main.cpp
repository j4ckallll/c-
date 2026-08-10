#include <iostream>
using namespace std;

enum class Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {

    Day today = Day::TUESDAY;
    Day tomorrow = Day::WEDNESDAY;

    if (today == Day::SUNDAY) {
        cout << "Holiday" << endl;
    } else {
        cout << "Not a Holiday" << endl;
    }

    return 0;
}