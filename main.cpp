#include <iostream>
using namespace std;
//stdΪĬ�ϵ�ȫ�������ռ䣬���Ǵ����������ռ�Ĭ�϶�Ƕ����������

int namespace_test(){
    std::cout << "Hello, World!" << std::endl;
    //:: �������������
    //ע�͵� using namespace std; Ҳ���ᱨ��
}

int main() {
    cout << "Hello, World!" << endl;
    namespace_test();
    return 0;
}

