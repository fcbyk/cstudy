#include<string>
using namespace std;

class Student{

private:
    int age;
    int id;
    string name;

public:
    Student(int a){
    //这里clion报红，但能正常运行，不明白
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