#include <iostream>
using namespace std;
//std为默认的全局命名空间，我们创建的命名空间默认都嵌套在它里面

int namespace_test(){
    std::cout << "Hello, World!" << std::endl;
    //:: 叫作用域运算符
    //注释掉 using namespace std; 也不会报错
}

int main() {
    cout << "Hello, World!" << endl;
    namespace_test();
    return 0;
}

