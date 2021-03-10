#include <iostream>
#include <string>
using namespace std; // 命名空间

int main() {
    cout << "Hello, World!" << endl;
    string name;
    int age;
    cout << "请输入名字：";
    cin >> name;
    cout << "请输入年龄：";
    cin >> age;
    cout << "我的名字是：" << name << ", 我今年：" << age << "岁了，我明年" << age+1 << "岁了" << endl;

    return 0;
}

