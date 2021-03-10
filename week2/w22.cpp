#include <iostream>

using namespace std;

int main() {
    int n, result = 0;
    cout << "请输入n:";
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        result += i;
    }
    cout << "1+2+..+n的值为：" << result;
    return 0;
}
