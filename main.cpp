#include <iostream>
#include "class/Circle.cpp"
#include "class/Student.cpp"
// 分文件写，这里是写路径
using namespace std;

int main() {
    Circle c1;
    c1.r = 5;
    cout << c1.CircleArea() << endl;
    cout << c1.CircleZC() << endl;

    Student * zhangsan = new Student(100);
    cout << zhangsan->getAge() << endl;
}