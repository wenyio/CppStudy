#include <iostream>
#include <string>
using namespace std; // 命名空间

int main() {
    int grade;
    cin >> grade;
    if (grade >= 90 && grade <= 100) {
        cout << "优秀" << endl;
    } else if (grade < 90 && grade >= 70) {
        cout << "良好" << endl;
    } else if (grade < 70 && grade >= 60) {
        cout << "及格" << endl;
    } else if (grade < 60 && grade >= 0) {
        cout << "bu及格" << endl;
    } else {
        cout << "非法输入" << endl;
    }
    return 0;
}

