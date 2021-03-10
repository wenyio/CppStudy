#include <iostream>

using namespace std;

void change(int &num1, int &num2);

int main() {
    int iNum1 = 10;
    int iNum2 = 20;
    change(iNum1, iNum2);
    cout << "iNum1 = " << iNum1 << "; iNum2 = " << iNum2;
    return 0;
}

void change(int &num1, int &num2) {
    int t = num1;
    num1 = num2;
    num2 = t;
}

