#include <iostream>
#include <string>
using namespace std; // 命名空间

int main() {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    int max;
    max = x > y ? x : y > z ? y : z;
    cout << max << endl;
    return 0;
}

