#include<string>
using namespace std;

class Student{

private:
    int age;
    int id;
    string name;

public:
    Student(int a){
    //����clion���죬�����������У�������
        this->age = a;
    }

    ~Student(){

    }

    int getAge(){
        return age;
    }

    int getId(){
        return id;
    }

    string &getName(){
        return name;
    }
};